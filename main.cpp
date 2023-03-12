#include <iostream>
#include <stdio.h>   // чтобы пользоваться функцией printf
#include <stdlib.h>  // чтобы пользоваться функцией rand
#include <time.h>    // чтобы использовать функцию time()

//https://youngcoder.ru/lessons/4/sluchainie_chisla_na_c.php

//useful
//https://ru.wikipedia.org/wiki/Stdlib.h
//https://ru.wikipedia.org/wiki/Unix-%D0%B2%D1%80%D0%B5%D0%BC%D1%8F


//В общем случае если нам нужно получить числа из отрезка [A;B],
//то необходимо воспользоваться следующей конструкцией:
//A + rand()%(B-A+1)

using namespace std;


//bool isEmpty(char* str){
//strlen();
//}

int main()
{
    cout << "Hello World!" << endl;

    //char* str1 = "first";      //for struct
    //char str2[20] = "f";


//    isEmpty(&str2[0]);

    /////////////////////////////////////////////////////////////////////////////////////
    //каков будет остаток от деления 45%21  100%50  24%21 и тд
    //////////////////////////////////////////////////////////////////////////////////////

    /* генерируем пять случайных целых чисел из отрезка [80; 100] */
    //A + rand()%(B-A+1)


    //date hw clock //linux

    srand(time(NULL));
    printf("%ld\n", time(NULL));

    printf("%d\n", 80 + rand()%(100 - 80 + 1));
    printf("%d\n", 80 + rand()%(100 - 79));
    printf("%d\n", 80 + rand()%21);
    printf("%d\n", 80 + rand()%21);
    printf("%d\n", 80 + rand()%21);
    printf("%d\n", 80 + rand()%21);
    printf("%d\n", 80 + rand()%21);
    printf("%d\n", 80 + rand()%21);
    printf("%d\n", 80 + rand()%21);

    //20 ... 50
//  printf("%d\n", 20 + rand()%(50-20+1));

    //create new project
    //low  top

    //-80  -100 - experiment
    //80 100
    // int GetRandomValue(80, 100); .h .cpp

   unsigned char progress = 219;   //-128  ... 127
   //0 ... 255

//   cout << progress << endl;

   for(int i =0; i<50; ++i){
       cout << progress;

       for(int j =0; j<100000; ++j){

       }
//       cout << progress;
   }


   //3 lines

//#include <unistd.h>

//unsigned int microseconds;
//...
//usleep(microseconds);


//   system("cls");
//   system("color 4");


    return 0;
}
