#include<iostream>
#include<fstream>
#include<string> //contains getline()
#include<iomanip> //contains setw(), setprecision()
using namespace std;

class Inventory
{
    char name[10];
    int code;
    float cost;
public:
    void readData();
    void writeData();
};

void Inventory::readData(){
cout<<"Enter Name: ";cin>>name;
cout<<"Enter Code: ";cin>>code;
cout<<"Enter Cost: ";cin>>cost;
}

void Inventory::writeData(){
cout<<setiosflags(ios::left)
<<setw(10)<<name
<<setiosflags(ios::right)
<<setw(10)<<code
<<setprecision(5)
<<setw(10)<<cost<<endl;
}

int main()
{
    string str = "Tired of writing :( Hello World! \nEveryday... \nI want something new bruhh, Please. ";
    //Opening using constructor of ofstream class
    ofstream out("File-Handling/sample.txt");
    //Now let's perform a write operation
    out<<str;
    out.close(); //one way to close the file & second way is automatic when stream expires (or program terminates).

    //opening using open() fxn
    out.open("File-Handling/sample.txt", ios::app);
    out<<"Requests: "<<(6+9+4)<<" ";
    //out.close();

    //out.open("File-Handling/sample.txt", ios::app);
    for(int i=1; i<=5; i++){
        out.put('*'); //appends '*' into file
    }
    out.close();

    string str2;
    //Opening using constructor of ifstream class
    ifstream in("File-Handling/sample.txt", ios::in);
    //Now let's perform a read
    //in>>str2; //reads only first word

/*
    getline(in, str2); //reads first line & stores it in str2
    cout<<str2<<endl;
    getline(in, str2); //reads second line & stores it in str2
    cout<<str2<<endl;
    getline(in, str2); //reads third line & stores it in str2
    cout<<str2<<endl;
*/


    char ch;
    //reading file by detecting eof
/*
    while(in){
        //in>>ch;   //doesn't read space or newline characters
        in.get(ch); //does read spaces & newline characters - better way
        cout<<ch;
    }
    cout<<endl;
*/

/*
    while(in.eof() == 0){ //second way to detect eoof
        getline(in, str2);
        cout<<str2<<endl; //doesn't print newline characters by itself
    }
*/
    in.close();

    fstream file;
/*
    file.open("File-Handling/sample-2.txt", ios::in | ios::out);
    file<<"Kem cho?\nMazza maa?\n";
    cout<<"Put: "<<file.tellp()<<endl;
    cout<<"Get: "<<file.tellg()<<endl;
    file.seekg(-12, ios::cur); //moves get pointer 12 bytes backward -- but it moved both pointers - fstream synchronizes the movement of file ptrs
    cout<<"Put: "<<file.tellp()<<endl;
    cout<<"Get: "<<file.tellg()<<endl;
    while(file){
        file.get(ch);
        cout<<ch;
    }
    file.close();
*/

/*
    float marks[5] ={98.478, 87.5, 95.5, 98, 97.1};
    file.open("File-Handling/sample-2.txt");
    file.write((char *)&marks, sizeof(marks));
    file.seekg(0);
    cout<<"Put: "<<file.tellp()<<endl;
    cout<<"Get: "<<file.tellg()<<endl;
    for(int i=0; i<5; i++)
        marks[i]=0;
    file.read((char *) &marks, sizeof(marks));
    for(int i=0; i<5;i++){
        cout.setf(ios::showpoint);
        cout<<setw(10)<<setprecision(4)<<marks[i];
    }
    file.close();
 */

    Inventory item[3], item2[3];
    file.open("File-Handling/sample-3.txt", ios::in | ios::out); //it doesn't create a file if it doesn't exist, god knows why? or maybe it creates then why I can't see it :((
    cout<<"Enter Details For 3 Items: "<<endl;
    for(int i=0; i<3; i++){
        item[i].readData();
        file.write((char *)&item[i], sizeof(item[i]));
    }
    file.seekg(0);
    cout<<"Put: "<<file.tellp()<<endl;
    cout<<"Get: "<<file.tellg()<<endl;
    cout<<"\n OUTPUT \n";
    for(int i=0; i<3; i++)
    {
        file.read((char *) &item2[i], sizeof(item2[i]));
        item2[i].writeData();
    }

    //random Access
    Inventory ranObj;
    int objLen = sizeof(ranObj);
    cout<<"ObjLength: "<<objLen<<endl;
    file.seekg(0, ios::end);
    cout<<"Number of Objs: "<<file.tellg()/objLen<<endl;
    cout<<"File Size(in Bytes): "<<file.tellg()<<endl;
    int loc = 1*objLen; //location of second object [0,1,2]
    file.seekg(loc, ios::beg);
    cout<<"Put: "<<file.tellp()<<endl;
    cout<<"Get: "<<file.tellg()<<endl;
    file.read((char *) &ranObj, sizeof(ranObj));
        ranObj.writeData();
    file.close();

    return 0;
}

/*
The classes to create files streams (objects of these 3 classes) in C++:
1. fstream     -> to create a stream (class obj here) for both purposes.
2. ifstream    -> to create an input stream (to write to program - read from file) - uses >> (Extraction operator)
3. ofstream    -> to create an output stream (to read from the program - write to file) << (insertion operator)
All the three classes are derived from fstreambase class.

In order to work with files, first you'll have to open it :- Primarily, 2 ways (waise multiple methods hain)
1. Open using constructor of the class choosen
2. Using the member function open(filename, mode-parameter) of the class( whose object is created - fstream, ifstream or ofstream)

ofstream - for writing to file,
ifstream - for reading only &
fstream - for both.

ifstream objects can't read spaces & newline characters (only read first word)

To read a line- use getline(object, str-to-store) function - it reads one line in one go, to read second line call it again (aur ye silsila jaari rahega)

Closing A File :-
1. File is closed automatically  when a file-stream object expires or program terminates.
2. Close file using obj.close() member fxn.

File Pointers & Their Manipulators
2 file ptrs in cpp - get (input) pointer & put (read) pointer
Manipulators
1. seekg(offset, refposition) - to move get pointer to a specified location - used in getting input into program
2. tellg() - gives the current location of get ptr
3. seekp(offset, refPosition) - moves the put pointer to offset bytes from refPosition - used for putting output outside of program
4. tellp() - gives the current location of put ptr

Sequential Access
1. put() - to write single  to file & get() - to read single character from file at once.
2. read() & write() - for binary data
used for handling arrays, numbers & class objects

clear() member fxn is used to turn off the eof flag. - iska arth mujhe bhi ni pta, bas book main likha tha toh paper main likh aana.
*/
