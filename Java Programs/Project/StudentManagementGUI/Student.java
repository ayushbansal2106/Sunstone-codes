public class Student {
    private int rollNo;
    private String name;
    private int[] marks = new int[3]; // [Math, Science, English]

    public Student(int rollNo, String name, int math, int science, int english) {
        this.rollNo = rollNo;
        this.name = name;
        this.marks[0] = math;
        this.marks[1] = science;
        this.marks[2] = english;
    }

    public int getRollNo() { return rollNo; }
    public String getName() { return name; }
    public void setName(String name) { this.name = name; }
    public int[] getMarks() { return marks; }
    public void setMarks(int math, int science, int english) {
        this.marks[0] = math;
        this.marks[1] = science;
        this.marks[2] = english;
    }

    public int getTotalMarks() {
        return marks[0] + marks[1] + marks[2];
    }

    public double getAverage() {
        return getTotalMarks() / 3.0;
    }

    public String getGrade() {
        double avg = getAverage();
        if (avg >= 90) return "A";
        if (avg >= 75) return "B";
        if (avg >= 60) return "C";
        if (avg >= 45) return "D";
        return "F";
    }

    public void printReport() {
        System.out.println("Roll No: " + rollNo);
        System.out.println("Name: " + name);
        System.out.println("Marks - Math: " + marks[0] + ", Science: " + marks[1] + ", English: " + marks[2]);
        System.out.println("Average: " + getAverage());
        System.out.println("Grade: " + getGrade());
    }
}