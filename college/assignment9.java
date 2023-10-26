import java.util.*;

class shape {

  int l, b, s, r, base, height;

  public void draw() {
    System.out.println("shape drawn");
  }

  public void area() {}
}

class rectangle extends shapeDemo {

  int length, breadth;

  rectangle(int l, int b) {
    this.length = l;
    this.breadth = b;
  }

  public void draw() {
    System.out.println("rectangle drawn");
  }

  public void area() {
    System.out.println("Area of rectangle is  " + length * breadth);
  }
}

class square extends shapeDemo {

  int side;

  square(int s) {
    this.side = s;
  }

  public void draw() {
    System.out.println("square drawn");
  }

  public void area() {
    System.out.println("Area of square is " + side * side);
  }
}

class circle extends shapeDemo {

  int radius;

  circle(int r) {
    this.radius = r;
  }

  public void draw() {
    System.out.println("circle drawn");
  }

  public void area() {
    System.out.println("Area of circle is " + 3.14 * radius * radius);
  }
}

class triangle extends shapeDemo {

  int base, height;

  triangle(int b, int h) {
    this.base = b;
    this.height = h;
  }

  public void draw() {
    System.out.println("triangle drawn");
  }

  public void area() {
    System.out.println("area of triangle is " + 0.5 * base * height);
  }
}

public class assignment9 {

  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);
    System.out.println("\n 1.rectangle\n 2.square\n 3.circle\n 4.triangle");
    int a = sc.nextInt();

    switch (a) {
      case 1:
        System.out.println("Enter length and breadth of rectangle:");
        int c = sc.nextInt();
        int d = sc.nextInt();
        rectangle r = new rectangle(c, d);
        r.draw();
        r.area();
        break;
      case 2:
        System.out.println("Enter sidde of a sqaure:");
        c = sc.nextInt();

        square s = new square(c);
        s.draw();
        s.area();
        break;
      case 3:
        System.out.println("Enter radius of a circle:");
        c = sc.nextInt();

        circle circ = new circle(c);
        circ.draw();
        circ.area();
        break;
      case 4:
        System.out.println("Enter base and height of the triangle: ");
        c = sc.nextInt();
        d = sc.nextInt();
        triangle t = new triangle(c, d);
        t.draw();
        t.area();
        break;
    }
    System.out.println(" ");
  }
}
