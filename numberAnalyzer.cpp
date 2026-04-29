#include<iostream>
using namespace std;
bool isPrime(int n){
    if(n<=1){return false;}
    for(int i=2;i<n;i++){
        if(n%i==0){return false;}
    }
    return true;
}
int sumOfDigits(int n){
    int digSum=0;
    while(n>0){
        int lastDigit=n%10;
        n/=10;
        digSum+=lastDigit;
    }
    return digSum;
}
int reverseNumber(int n){
    int rev=0;
    while(n>0){
        int last= n%10;
        rev=rev*10+last;
        n=n/10;
    }
    return rev;
}
bool isPalindrome(int n){
    int original = n;
    int rev = n;
    while(n>0){
        int last = n%10;
        rev=rev*10+last;
        n = n/10;
    }
    return original == rev;
}
int countDigits(int n){
    if(n==0) return 1;

    int count = 0;
    n = abs(n);
    while(n>0){
        count++;
        n = n/10;
    }
    return count;
}
int main(){
    int n, choice;
    char again = 'y';
    cout<<"=============================\n";
    cout<<"     NUMBER ANALYZER APP     \n";
    cout<<"=============================\n";
    cout<<"Enter a number: ";
    cin>>n;

    do{
        cout<<"\nCurrent number: "<<n<<endl;
        cout<<"\n1. Prime\n2. Sum\n3. Reverse\n4. Palindrome\n5. Count\n6. Exit\n";
        cout<<"Enter a Choice: ";
        cin>> choice;

        switch(choice){
            case 1:
            if(isPrime(n)){
                cout<<"The number is Prime."<<endl;
            }else{cout<<"The number is Not Prime."<<endl;}
            break;
            case 2:
            cout<<"The Sum of Digits is: "<<sumOfDigits(n);
            break;
            case 3:
            cout<<"Reversed Number: "<<reverseNumber(n);
            break;
            case 4:
            if(isPalindrome(n)){
            cout<<"The number is a Palindrome\n";}
            else{"The number is NOT a Palindrome\n";}
            break;
            case 5:
            cout<<"Number of Digits: "<<countDigits(n);
            break;
        }
        cout<<"\nWant to enter a new number? (y/n): ";
        cin>> again;

        if(again=='y'|| again=='Y'){
            cout<<"Enter new number: ";
            cin>>n;
        }
    }while(choice != 6);
    cout<<"Thank you for using the program!\n";
    return 0;
}