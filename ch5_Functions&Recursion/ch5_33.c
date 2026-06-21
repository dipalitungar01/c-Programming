//practice Q.33 write a function to calculate 
    //Percentage of a student from Marks in Science,math & Sanskrit.

    int calcPercentage(int science, int math,int sanskrit);

    int main(){
        int sc = 98;
        int math=95;
        int sanskrit= 99;


        printf("percentage is :%d\n", calcPercentage(sc,math,sanskrit));
        return 0;
    }

    int calcPercentage(int science, int math, int sanskrit){
        return ((science + math + sanskrit)/ 3);
    }