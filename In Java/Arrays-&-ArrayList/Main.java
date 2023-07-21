public class Main {
    public static void main(String[] args) {
        /*
        Syntax: datatype[] variableName = new datatype[size];
        For e.g.
        int[] rollNumbers = new int[5]; - makes an array to store 5 integers.

        or direct initialization
        int[] rollNumbers = {23,45,67,24,1};
        int rollNumbers[] = {23,45,67,24,1}; //also works but not the java way to do it

        - The int[] in syntax represents the type of data, is going to be stored in array.
        - Datatype of all the elements in array must be same.
        - Memory allocation for array is not necessarily continuous in java it depends on the JVM.
        - We can access array element using array indices - arrayName[index] -> element.
        - new keyword is used for creating objects - In java (every type of) objects are created at run-time in heap memory. - So maybe, we can say new is used for dynamic memory allocation (DMA).
        - Direct Initialization of array also does the same thing.

        int[] rollNumbers; (declaration of array- rollNumbers is getting defined in stack - but no memory allocated yet)
        rollNumbers = new int[5]; (initialization- here object is being created in heap-memory actually)

        - In rollNumbers array till now all elements are 0.
        - But in other data types like String, initially all elements are null.
        - null is a special literal, you can cast (or assign it to) it into any non-primitive data type, but can't create a refVar of null type - it's not a data type.
        - By default value of what referenceVariable(of non-primitive datatype) points to.

        METHODS TO PRINT AN ARRAY
        for(int i=0; i<arr.length; i++)
               System.out.print(arr[i] + " ");

        for(int e : arr) //for-each loop - for each e in arr, print the e
               System.out.print(e + " "); //here e represents element of arr

         System.out.println(Arrays.toString(arr)); //third method

         METHOD TO INPUT AN ARRAY
         for(int i=0; i<arr.length; i++)
               arr[i] = in.nextInt();
        */


        System.out.println("Hello Arrays!");
    }
}