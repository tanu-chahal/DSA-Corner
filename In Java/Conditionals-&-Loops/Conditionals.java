public class Conditionals {
    public static void main(String[] args) {
          int salary = 5000;
          if(salary>20000)
              System.out.println("Congratulations for bonus of 5000, now your total salary is: "+(salary + 5000));
          else if (salary<20000 && salary>10000)
              System.out.println("Congratulations for bonus of 2000, now your total salary is: "+(salary + 2000));
          else
              System.out.println("Congratulations for bonus of 1000, now your total salary is: "+(salary + 1000));
    }
}