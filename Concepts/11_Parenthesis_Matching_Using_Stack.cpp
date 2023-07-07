//Parenthesis Matching Using Stack //runs :)
#include<iostream>
#include<string.h>
using namespace std;

struct Stack{
char *arr;
int sizeOfArr;
int top;
};

void push(Stack*st, char ch){
if(st->top==(st->sizeOfArr-1)){
   cout<<"\n! Stack will overflow."<<endl;
}
    st->top++;
    st->arr[st->top] = ch;
    return;
}

bool pop(Stack*st, char ch){
if(st->top<0){
   cout<<"! Stack will overflow."<<endl;
   return false;
}
char c = st->arr[st->top];
if(ch==')'){
    if(c!='('){
       cout<<"\nParenthesis didn't match while popping."<<c<<" & "<<ch<<endl;
       return false;}
}
else if(ch=='}'){
    if(c!='{'){
         cout<<"\nParenthesis didn't match while popping."<<c<<" & "<<ch<<endl;
         return false;}
}
else {
    if(c!='['){
            cout<<"\nParenthesis didn't match while popping."<<c<<" & "<<ch<<endl;
            return false;
    }
}
        st->top--;
       return true;
}

int main(){
  Stack *st = new Stack;
  st->top = -1;
  st->sizeOfArr = 10;
  st->arr = new (char);
  string str;
  cout<<"Enter expression: ";
  getline(cin,str);
  int i;
  for(i=0;i<str.length();i++){
    if(str[i]=='('|| str[i]=='{'||str[i]=='['){
        push(st,str[i]);
        cout<<i<<" Push "<<str[i]<<endl;
       }
    else if(str[i]==')'|| str[i]=='}'||str[i]==']'){
       bool flag = pop(st,str[i]);
       if(!flag){
        cout<<"\n!Unbalanced Parenthesis"<<endl;
        exit(0);
       }
       cout<<i<<" Pop "<<str[i]<<endl;
    }
}
if(st->top<0){
    cout<<"\nBalanced Parenthesis :)"<<endl;;
}
else{
  cout<<"\nUnbalanced Parenthesis."<<endl;
}
return 0;
}
