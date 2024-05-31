#include <stdio.h>
#include <string.h>

int main(){
    long long int testcase, outputt_count = 0, sum = 0, sum_output;
    scanf("%lld", &testcase);

    long long int input[testcase];
    long long int output[testcase];

    for(long long int i = 0; i < testcase; i++){
        scanf("%lld", &input[i]);
    }

    for(int i = 0; i < testcase; i++){                  // debugging
        printf("\t%lld\n", input[i]);
    }

    // --------------------------------------------------------------------------

    long long int start = 0, end = testcase;

    for(long long int loop_count = start; loop_count < end; loop_count++){
    
        for(long long int i = start; i < end; i++){
            sum = sum + input[i];
        }

        if(sum % 2 != 0){
            output[loop_count] = input[end - 1];
            end --;
        }else if(sum % 2 == 0){
            output[loop_count] = input[start];
            start ++;
        }    

    }

    for(int i = 0; i < testcase; i++){                  // debugging
        printf("%lld\n", output[i]);
    }
}