public class StudentManager {
    private Student[] students = new Student[100];
    private int count = 0;

    public void addStudent(Student s) {
        if (count < students.length) {
            students[count++] = s;
        }
    }

    public void viewAllStudents() {
        for (int i = 0; i < count; i++) {
            System.out.println("-----------------------");
            students[i].printReport();
        }
    }

    public Student[] getAllStudents() {
    return students;
}

    public Student searchByRoll(int roll) {
        for (int i = 0; i < count; i++) {
            if (students[i].getRollNo() == roll) {
                return students[i];
            }
        }
        return null;
    }

    public Student searchByName(String name) {
        for (int i = 0; i < count; i++) {
            if (students[i].getName().equalsIgnoreCase(name)) {
                return students[i];
            }
        }
        return null;
    }

    public void deleteStudent(int roll) {
        for (int i = 0; i < count; i++) {
            if (students[i].getRollNo() == roll) {
                for (int j = i; j < count - 1; j++) {
                    students[j] = students[j + 1];
                }
                students[--count] = null;
                System.out.println("Student deleted.");
                return;
            }
        }
        System.out.println("Student not found.");
    }

    public void wipeAll() {
        for (int i = 0; i < count; i++) {
            students[i] = null;
        }
        count = 0;
        System.out.println("All records wiped.");
    }

    public void showStatistics() {
        if (count == 0) {
            System.out.println("No records to show.");
            return;
        }
        double total = 0;
        int[] gradeCount = new int[5]; // A, B, C, D, F

        for (int i = 0; i < count; i++) {
            double avg = students[i].getAverage();
            total += avg;
            String grade = students[i].getGrade();
            switch (grade) {
                case "A": gradeCount[0]++; break;
                case "B": gradeCount[1]++; break;
                case "C": gradeCount[2]++; break;
                case "D": gradeCount[3]++; break;
                default:  gradeCount[4]++; break;
            }
        }

        System.out.println("Total Students: " + count);
        System.out.println("Class Average: " + (total / count));
        System.out.println("Grade Distribution: A(" + gradeCount[0] + "), B(" + gradeCount[1] + "), C(" + gradeCount[2] + "), D(" + gradeCount[3] + "), F(" + gradeCount[4] + ")");
    }
}