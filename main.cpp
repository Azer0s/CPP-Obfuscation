#include <iostream>

#include "obfuscate.hpp"

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
