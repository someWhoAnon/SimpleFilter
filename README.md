# SimpleFilter

This class created for filtering values from sensors, basicly i use it in my Arduino projects
![alt text](https://raw.githubusercontent.com/someWhoAnon/SimpleFilter/master/Filtering.png)

# Usage

Just include SimpleFilter.h in your project:

#include "SimpleFilter.h"

Then create object:

SimpleFilter someFilter;

Init your filter:

someFilter.init(0.2, 0.01);

And use it:

someFilter.doFilter(someValueToFilter);


