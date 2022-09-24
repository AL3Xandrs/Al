#include <iostream>
#include <limits.h>
#include <cmath>
using namespace std;
//funciti un numar
bool Numarprim(int n){
    int div;
    if(n<2){
        return false;
    }
    if(n==2){
        return true;
    }
    for(div=2;div<=n/2;div++)
        if(n%div==0)
            return false;
    return true;
}
bool Patratperfect (int n){
if((int)sqrt(n)==sqrt(n)){
    return true;
}
  return false;
}
//functii cifre
int sumacif(int n){
int s=0;
while(n!=0){
 s=s+n%10;
 n=n/10;
}
return s;
}
int cifmax(int n){
int max=INT_MIN;
  while(n!=0){
    if(n%10>max){
        max=n%10;
    }
    n=n/10;
  }
  return max;
}
int cifmin(int n){
 int min=INT_MAX;
  while(n!=0){
    if(n%10<min){
        min=n%10;
    }
    n=n/10;
  }
  return min;
}
int oglnr(int n){
int ogl=0;
while (n!=0){
    ogl=ogl*10+n%10;
    n=n/10;
}
return ogl;
}
bool palindrom(int n){
if(n==oglnr(n)){
    return true;
   } else{
     return false;
   }

}
int catenumerepare (int n){
int k=0,uc;
 while(n!=0){
    uc=n%10;
    if(uc%2==0){
        k++;
    }
    n=n/10;
 }
 return k;
}
int catenumereimpare (int n){
int k=0,uc;
 while(n!=0){
    uc=n%10;
    if(uc%2==1){
        k++;
    }
    n=n/10;
 }
 return k;
}
 //functii doua numere
 int suma2numere (int a, int b){
 int s=0;
 s=a+b;
 return s;
 }
 int dif2numere (int a, int b){
 int c=0;
 c=a-b;
 return c;
 }
 int inmul2numere (int a, int b){
 int i=1;
 i=a*b;
 return i;
 }
float impartire2numere (float a, float b){
float c=1;
c=a/b;
return c;
}
float fractii (float a, float b, float c, float d){
float n1,n2;
 n1=a/b;
 n2=c/d;
 if(n1>n2){
    return 1;
 }
 if(n2>n1){
    return 2;
 }
 if(n1==n2){
    return 3;
 }
}
int sumanrinterval (int a,int b){
 int s=0,i;
 for(i=a;i<=b;i++){
    s=s+i;
    }
 return s;
}
int nrpatratperfinterval (int a,int b){
int i,k=0;
for(i=a;i<=b;i++){
 if((int)sqrt(i)==sqrt(i)){
  k++;
}
}
return k;
}
int nrpriminterval (int a,int b){
int i,k=0;
for(i=a;i<=b;i++){
 if(Numarprim(i)==true){
  k++;
}
}
return k;
}
float pitagora (float a, float b){
float c;
 c=sqrt(a*a+b*b);
 return c;
}
// ecuatie grad 1
float ecuatie1 (float a,float b){
float x;
 x=-b/a;
 return x;
}
int main()
{
    int check1,check2,check3,check4,check5;
    cout<<"Welcome to the full math calculator experiment Alpha"<<endl;
    cout<<"Choose what kind of problem do you want to solve:"<<endl;
    cout<<"One number problems(1)"<<endl;
    cout<<"Problems with the digits of a number(2)"<<endl;
    cout<<"Two numbers problems(3)"<<endl;
    cout<<"Problems with the interval between two numbers(4)"<<endl;
    cout<<"Grade one ecuations(5)"<<endl;
    cout<<"Grade two ecuations(6)"<<endl;
    cout<<"Pythagorian theorem(7)"<<endl;
    cout<<"Select your preference here : ";
    cin>>check1;
    if(check1==1){
            cout<<" "<<endl;
        cout<<"Check if a number is prime(1)"<<endl;
        cout<<"Check if a number is a perfect square(2)"<<endl;
        cout<<"Check if a numer is a palindrom(3)"<<endl;
        cout<<"Select your preference here : ";
        cin>>check2;
           cout<<" "<<endl;
        if(check2==1){// PRIME NUMBER
        float n;
        cout<<"Write your number here : ";
        cin>>n;
        if(Numarprim(n) == true){
        cout << "The number "<<n<<" is prime"<<endl;
    }else{
        cout << "The number "<<n<<" is not prime"<<endl;
    }

        }
        if(check2==2){//PERFECT SQUARE
            float n;
            cout<<"Write your number here : ";
        cin>>n;
           if(Patratperfect(n) == true){
        cout <<"The number "<<n<<" is a perfect square and its square root is  "<<sqrt(n)<<endl;
    }else{
        cout << "The number "<<n<<" is a  not perfect square and its square root is roughly  "<<sqrt(n)<<endl;
    }
        }
        if(check2==3){//PALINDROM
                float n;
            cout<<"Write your number here : ";
        cin>>n;
           if(palindrom(n)== true){
    cout<<"The mirrord number of "<<n<<" is "<<oglnr(n)<<" so it's a palindrom "<<endl;
   }else{
   cout<<"The mirrord number of "<<n<<" is "<<oglnr(n)<<" so it's not a palindrom "<<endl;
   }
        }
    }
    if(check1==2){
            cout<<" "<<endl;
      cout<<"Solve the sum of the digits of a number(1)"<<endl;
      cout<<"Check for the maximum digit(2)"<<endl;
      cout<<"Check fot the minimum digit(3)"<<endl;
      cout<<"How many even digits does a number have(4)"<<endl;
      cout<<"How many odd digits does a number have(5)"<<endl;
        cout<<"Select your preference here : ";
        cin>>check3;
           cout<<" "<<endl;
          if(check3==1){
                float n;
        cout<<"Write your number here : ";
        cin>>n;
        cout<<"The sum of the digits of "<<n<<" is "<<sumacif(n)<<endl;
     }
          if(check3==2){
                float n;
        cout<<"Write your number here : ";
        cin>>n;
        cout<<"The maximum digit of "<<n<<" is "<<cifmax(n)<<endl;
     }
          if(check3==3){
                float n;
        cout<<"Write your number here : ";
        cin>>n;
        cout<<"The minimum digit of "<<n<<" is "<<cifmin(n)<<endl;
     }
          if(check3==4){
                float n;
        cout<<"Write your number here : ";
        cin>>n;
        cout<<"The number has "<<catenumerepare(n)<<" even digits "<<endl;
     }
          if(check3==5){
                float n;
        cout<<"Write your number here : ";
        cin>>n;
        cout<<"The number has "<<catenumereimpare(n)<<" odd digits "<<endl;
     }
    }
    if(check1==3){
            cout<<" "<<endl;
        cout<<"Do a+b(1)"<<endl;
        cout<<"Do a-b(2)"<<endl;
        cout<<"Do a*b(3)"<<endl;
        cout<<"Do a/b(4)"<<endl;
        cout<<"Compare two fractions a/b and c/d (5)"<<endl;
        cout<<"Select your preference here : ";
        cin>>check4;
           cout<<" "<<endl;
                      if(check4==1){
            float a,b;
        cout<<"a=";
        cin>>a;
        cout<<"b=";
        cin>>b;
          cout<<"a+b="<<suma2numere(a,b)<<endl;
           }
                      if(check4==2){
            float a,b;
        cout<<"a=";
        cin>>a;
        cout<<"b=";
        cin>>b;
          cout<<"a-b="<<dif2numere(a,b)<<endl;
           }
                      if(check4==3){
            float a,b;
        cout<<"a=";
        cin>>a;
        cout<<"b=";
        cin>>b;
          cout<<"a*b="<<inmul2numere(a,b)<<endl;
           }
                      if(check4==4){
            float a,b;
        cout<<"a=";
        cin>>a;
        cout<<"b=";
        cin>>b;
          cout<<"a/b="<<impartire2numere(a,b)<<endl;
           }
                      if(check4==5){
            float a,b,c,d;
        cout<<"a=";
        cin>>a;
        cout<<"b=";
        cin>>b;
        cout<<"c=";
        cin>>c;
        cout<<"d=";
        cin>>d;
              if(fractii(a,b,c,d)==1){
    cout<<a<<"/"<<b<<" is bigger than "<<c<<"/"<<d<<endl;
   }
      if(fractii(a,b,c,d)==2){
    cout<<a<<"/"<<b<<" is smaller than "<<c<<"/"<<d<<endl;
   }
      if(fractii(a,b,c,d)==3){
    cout<<a<<"/"<<b<<" is equal with "<<c<<"/"<<d<<endl;
   }
           }
    }
    if(check1==4){
                 cout<<" "<<endl;
        cout<<"Solve the sum of natural numbers between a and b (1)"<<endl;
        cout<<"Solve how many perfect squares are there between a and b (2)"<<endl;
        cout<<"Solve how many prime numbers are there between a and b(3)"<<endl;
        cout<<"Select your preference here : ";
        cin>>check5;
           cout<<" "<<endl;
            if(check5==1){
            float a,b;
        cout<<"a=";
        cin>>a;
        cout<<"b=";
        cin>>b;
          cout<<"The sum of natural numbers between a and b is "<<sumanrinterval(a,b)<<endl;
           }
                       if(check5==2){
            float a,b;
        cout<<"a=";
        cin>>a;
        cout<<"b=";
        cin>>b;
          cout<<"The number of perfect squares between a and b is "<<nrpatratperfinterval(a,b)<<endl;
           }
                       if(check5==3){
            float a,b;
        cout<<"a=";
        cin>>a;
        cout<<"b=";
        cin>>b;
          cout<<"The number of prime numbers between a and b is "<<nrpriminterval(a,b)<<endl;
           }
    }
    if(check1==5){
    cout<<" "<<endl;
    cout<<"ax+b=0 "<<endl;
        float a,b;
        cout<<"a=";
        cin>>a;
        cout<<"b=";
        cin>>b;
        cout<<" "<<endl;
        cout<<"x= "<<ecuatie1(a,b)<<endl;
    }
    if(check1==6){
        cout<<" "<<endl;
    cout<<"ax^2+bx+c=0 "<<endl;
        float a,b,c;
        cout<<"a=";
        cin>>a;
        cout<<"b=";
        cin>>b;
        cout<<"c=";
        cin>>c;
        cout<<" "<<endl;
    float delta,x1,x2;
    if(a!=0&&b!=0){
    delta=b*b-4*a*c;
    if(delta>=0){
        x1=(-b+sqrt(delta))/(2*a);
        x2=(-b-sqrt(delta))/(2*a);
          cout<<"x1="<<x1<<endl;
          cout<<"x2="<<x2<<endl;
         }else
    if(delta<0){
cout<<"The ecuation does not have solutions";
          }
     }
    if (a==0&&b==0&&c==0)
          {cout<<"The ecuation has endless solutions";
          }
      else
    if(a==0&&b==0)
          {cout<<"The ecuation does not have solutions";
          }
      else
    if(a==0)
          {if(c!=0)
             {x1=-b/c;
             cout<<"x="<<x1;
             }
        else
             cout<<"The ecuation does not have solutions ";
           }
      else
    if(b==0)
          {if(-c/a>=0&&c!=0)
             {x1=sqrt(-c/a);
             cout<<"x="<<x1;
             }
        else
           if(c==0)
             {cout<<"x=0";
             }
      else
             {cout<<"The ecuation does not have solutions ";
             }
          }

    }
    if(check1==7){
    cout<<" "<<endl;
    cout<<"Solve c^2=a^2+b^2 "<<endl;
        float a,b;
        cout<<"a=";
        cin>>a;
        cout<<"b=";
        cin>>b;
            cout<<" The hypotenuse of the abc triangle is  "<< pitagora(a,b)<<endl;

    }
    return 0;
}
