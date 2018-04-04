#include <iostream>

#define forever for(;;){
#define unless(a) if(!(a)){
#define out(a) std::cout << a << std::endl
#define entry int main(){
#define end }
#define put return
#define func auto
#define sets {


func t1() sets
    out("Hi");
end


entry
    t1();

    unless(false)
	out("Hello");
    end

    int i = 0;
    
    forever
	i++;
	out(i);
		
	unless(i < 10)
	    put 0;	
	end
    end
end
