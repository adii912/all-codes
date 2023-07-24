class overloading{
    void add(int a, int b) {
        int c=a+b;
        System.out.println("addition of 2 no."+c);
    }
    void add(float a, float b ) {
        float d=a+b;
        System.out.println("adiition  of 2 no is: " +d);
    }
    void add(int a, int b, int c){
        int d=a+b+c; 
        System.out.println("Adiition of 3 no."+d);
    }
    void sub(int a ,  int b) {
        int c=a-b;
        System.out.println("Subtraction of 2 no is:"+c);
    }
}
class overloadingmain {
    public static void main (String [] args){
        overloading obj=new overloading();
        obj.sub(5,3);
        
    } 
}