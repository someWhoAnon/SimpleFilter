# SimpleFilter

This class created for filtering values from sensors, basicly i use it in my Arduino projects

# Usage

Just include SimpleFilter.h in your project:

#include "SimpleFilter.h"

Then create object:

SimpleFilter someFilter;

Init your filter:

someFilter.init(0.2, 0.01);

And use it:

someFilter.doFilter(someValueToFilter);


