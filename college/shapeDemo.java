import java.util.Scanner;

// Step 1: Create an abstract base class Shape
abstract class Shape {
    // Abstract method for drawing the shape
    abstract void draw();
}

// Step 2: Create concrete subclasses for different shapes
class Circle extends Shape {
    @Override
    void draw() {
        System.out.println("Drawing a Circle");
        // Add code to draw a circle here
    }
}

class Rectangle extends Shape {
    @Override
    void draw() {
        System.out.println("Drawing a Rectangle");
        // Add code to draw a rectangle here
    }
}

class Triangle extends Shape {
    @Override
    void draw() {
        System.out.println("Drawing a Triangle");
        // Add code to draw a triangle here
    }
}

public class shapeDemo {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (true) {
            System.out.println("Choose a shape to draw:");
            System.out.println("1. Circle");
            System.out.println("2. Rectangle");
            System.out.println("3. Triangle");
            System.out.println("4. Exit");

            int choice = scanner.nextInt();

            Shape shape = null;

            switch (choice) {
                case 1:
                    shape = new Circle();
                    break;
                case 2:
                    shape = new Rectangle();
                    break;
                case 3:
                    shape = new Triangle();
                    break;
                case 4:
                    scanner.close();
                    System.out.println("Exiting the program.");
                    System.exit(0);
                default:
                    System.out.println("Invalid choice. Please choose a valid option.");
                    continue;
            }

            // Step 3: Use polymorphism to draw the selected shape
            shape.draw();
        }
    }
}

