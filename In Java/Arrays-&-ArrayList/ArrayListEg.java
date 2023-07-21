import java.util.ArrayList;
import java.util.Scanner;

public class ArrayListEg {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        //Array list is used to create arrays of dynamic size, when we don't know the the size of add we need beforehand -
        //we can use ArrayList - ArrayLists are just like vectors in cpp
        //Syntax
//        ArrayList<Integer> listName = new ArrayList<Integer>();//can write int at the place of Integer we have to write wrapper classes
        ArrayList<Integer> list2 = new ArrayList<Integer>(10); //we can also give some initial capacity or default size
//        ArrayList<String> list3= new ArrayList(); // can also do it like this
//        ArrayList list4 = new ArrayList();//can do it like this too, but not a good practice
//
//        listName.add(67); //add method to add elements in ArrayList
//        listName.add(27);
//        listName.add(57);
//        listName.add(97);
//        listName.add(87);
//        listName.add(37);
//        listName.add(47); //add as many things you want
//
//        System.out.println(listName);
//        System.out.println(listName.contains(57));// gives true or false based on whether the list contains the element or not
//        listName.set(0,99); //sets 0th index to 99
//        System.out.println(listName);
//        listName.remove(3); //removes element from index 3
//        System.out.println(listName);

        //INPUT
        for(int i=0; i<5; i++){
            list2.add(in.nextInt());
        }

        //get item at any index
        for(int i=0; i<list2.size(); i++){
            System.out.println(list2.get(i)); //get item at index i - another way to print
            //list2[index] syntax doesn't work
        }
    }
}
