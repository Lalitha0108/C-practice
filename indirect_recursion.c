#include<stdio.h>
void func1(int a){
    if(a<1){
        return;
    }
    printf("%d ", a);
    a = a - 1;

    // Indirect recursive call to functionB
    func2(a);
}
void func2(int a){
    if (a < 2) {
        return;
    }

    printf("%d ", a);
    a = a / 2;

    // Indirect recursive call to functionA
    func1(a);
}
int main(){
    
    func2(20);

    return 0;
}

    O/P:-
      20 10 9 4 3 1 
