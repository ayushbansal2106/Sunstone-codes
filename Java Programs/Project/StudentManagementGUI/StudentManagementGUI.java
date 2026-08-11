
import javax.swing.*;
import java.awt.event.*;
import java.awt.*;

public class StudentManagementGUI {
    private static StudentManager manager = new StudentManager();

    public static void main(String[] args) {
        JFrame loginFrame = new JFrame("Login");
        loginFrame.setSize(300, 200);
        loginFrame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        loginFrame.setLayout(new GridLayout(3, 2));

        JLabel userLabel = new JLabel("Username:");
        JTextField userField = new JTextField();
        JLabel passLabel = new JLabel("Password:");
        JPasswordField passField = new JPasswordField();
        JButton loginButton = new JButton("Login");

        loginFrame.add(userLabel);
        loginFrame.add(userField);
        loginFrame.add(passLabel);
        loginFrame.add(passField);
        loginFrame.add(new JLabel());
        loginFrame.add(loginButton);

        loginButton.addActionListener(e -> {
            String username = userField.getText();
            String password = new String(passField.getPassword());

            if (username.equals("admin") && password.equals("1234")) {
                loginFrame.dispose();
                showMainMenu();
            } else {
                JOptionPane.showMessageDialog(loginFrame, "Access Denied");
            }
        });

        loginFrame.setVisible(true);
    }

    private static void showMainMenu() {
        JFrame mainFrame = new JFrame("Student Management System");
        mainFrame.setSize(500, 400);
        mainFrame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        mainFrame.setLayout(new GridLayout(8, 1));

        JButton addButton = new JButton("Add Student");
        JButton viewButton = new JButton("View All Students");
        JButton searchRollButton = new JButton("Search by Roll Number");
        JButton searchNameButton = new JButton("Search by Name");
        JButton deleteButton = new JButton("Delete Student");
        JButton wipeButton = new JButton("Wipe All Records");
        JButton statsButton = new JButton("Show Statistics");
        JButton exitButton = new JButton("Exit");

        mainFrame.add(addButton);
        mainFrame.add(viewButton);
        mainFrame.add(searchRollButton);
        mainFrame.add(searchNameButton);
        mainFrame.add(deleteButton);
        mainFrame.add(wipeButton);
        mainFrame.add(statsButton);
        mainFrame.add(exitButton);

        addButton.addActionListener(e -> addStudentDialog());
        viewButton.addActionListener(e -> viewAllStudentsDialog());
        searchRollButton.addActionListener(e -> searchByRollDialog());
        searchNameButton.addActionListener(e -> searchByNameDialog());
        deleteButton.addActionListener(e -> deleteStudentDialog());
        wipeButton.addActionListener(e -> {
            int confirm = JOptionPane.showConfirmDialog(mainFrame, "Are you sure you want to wipe all records?",
                    "Confirm", JOptionPane.YES_NO_OPTION);
            if (confirm == JOptionPane.YES_OPTION) {
                manager.wipeAll();
                JOptionPane.showMessageDialog(mainFrame, "All records wiped.");
            }
        });
        statsButton.addActionListener(e -> showStatisticsDialog());
        exitButton.addActionListener(e -> System.exit(0));

        mainFrame.setVisible(true);
    }

    private static void addStudentDialog() {
        JTextField rollField = new JTextField();
        JTextField nameField = new JTextField();
        JTextField mathField = new JTextField();
        JTextField scienceField = new JTextField();
        JTextField englishField = new JTextField();

        Object[] message = {
                "Roll No:", rollField,
                "Name:", nameField,
                "Math Marks:", mathField,
                "Science Marks:", scienceField,
                "English Marks:", englishField
        };

        int option = JOptionPane.showConfirmDialog(null, message, "Add Student", JOptionPane.OK_CANCEL_OPTION);
        if (option == JOptionPane.OK_OPTION) {
            try {
                int roll = Integer.parseInt(rollField.getText());
                String name = nameField.getText();
                int math = Integer.parseInt(mathField.getText());
                int science = Integer.parseInt(scienceField.getText());
                int english = Integer.parseInt(englishField.getText());

                Student s = new Student(roll, name, math, science, english);
                manager.addStudent(s);
                JOptionPane.showMessageDialog(null, "Student added.");
            } catch (Exception e) {
                JOptionPane.showMessageDialog(null, "Invalid input.");
            }
        }
    }

    private static void viewAllStudentsDialog() {
        JTextArea textArea = new JTextArea(20, 50);
        textArea.setEditable(false);

        Student[] allStudents = manager.getAllStudents();
        for (int i = 0; i < allStudents.length; i++) {
            Student s = allStudents[i];
            if (s != null) {
                textArea.append("Roll: " + s.getRollNo() +
                        ", Name: " + s.getName() +
                        ", Avg: " + s.getAverage() +
                        ", Grade: " + s.getGrade() + "\\n");
            }
        }
        JOptionPane.showMessageDialog(null, new JScrollPane(textArea), "All Students", JOptionPane.INFORMATION_MESSAGE);
    }

    private static void searchByRollDialog() {
        String input = JOptionPane.showInputDialog("Enter Roll Number:");
        try {
            int roll = Integer.parseInt(input);
            Student s = manager.searchByRoll(roll);
            if (s != null) {
                JOptionPane.showMessageDialog(null, "Roll: " + s.getRollNo() + "\nName: " + s.getName() +
                        "\nMath: " + s.getMarks()[0] + ", Science: " + s.getMarks()[1] + ", English: " + s.getMarks()[2]
                        +
                        "\nAvg: " + s.getAverage() + ", Grade: " + s.getGrade());
            } else {
                JOptionPane.showMessageDialog(null, "Student not found.");
            }
        } catch (Exception e) {
            JOptionPane.showMessageDialog(null, "Invalid input.");
        }
    }

    private static void searchByNameDialog() {
        String name = JOptionPane.showInputDialog("Enter Name:");
        Student s = manager.searchByName(name);
        if (s != null) {
            JOptionPane.showMessageDialog(null, "Roll: " + s.getRollNo() + "\nName: " + s.getName() +
                    "\nMath: " + s.getMarks()[0] + ", Science: " + s.getMarks()[1] + ", English: " + s.getMarks()[2] +
                    "\nAvg: " + s.getAverage() + ", Grade: " + s.getGrade());
        } else {
            JOptionPane.showMessageDialog(null, "Student not found.");
        }
    }

    private static void deleteStudentDialog() {
        String input = JOptionPane.showInputDialog("Enter Roll Number to delete:");
        try {
            int roll = Integer.parseInt(input);
            manager.deleteStudent(roll);
        } catch (Exception e) {
            JOptionPane.showMessageDialog(null, "Invalid input.");
        }
    }

    private static void showStatisticsDialog() {
        JTextArea statsArea = new JTextArea(10, 40);
        statsArea.setEditable(false);
        StringBuilder sb = new StringBuilder();
        sb.append("Statistics:\n");
        double total = 0;
        int count = 0;
        int[] gradeCount = new int[5]; // A B C D F
        for (int i = 0; i < 100; i++) {
            Student s = manager.searchByRoll(i + 1);
            if (s != null) {
                double avg = s.getAverage();
                total += avg;
                count++;
                String g = s.getGrade();
                switch (g) {
                    case "A":
                        gradeCount[0]++;
                        break;
                    case "B":
                        gradeCount[1]++;
                        break;
                    case "C":
                        gradeCount[2]++;
                        break;
                    case "D":
                        gradeCount[3]++;
                        break;
                    default:
                        gradeCount[4]++;
                        break;
                }
            }
        }
        if (count == 0) {
            sb.append("No records to show.\n");
        } else {
            sb.append("Total Students: " + count + "\n");
            sb.append("Class Average: " + (total / count) + "\n");
            sb.append("Grade Distribution: A(" + gradeCount[0] + "), B(" + gradeCount[1] + "), C(" + gradeCount[2] +
                    "), D(" + gradeCount[3] + "), F(" + gradeCount[4] + ")\n");
        }
        statsArea.setText(sb.toString());
        JOptionPane.showMessageDialog(null, new JScrollPane(statsArea), "Statistics", JOptionPane.INFORMATION_MESSAGE);
    }
}
