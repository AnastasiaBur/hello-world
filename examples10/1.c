
Makefile containes a set of rules as well as some variables that describe the behavior that the compiler must adopt.


//vim Makefile:
rule_a:
	echo "rule A"
//____________________
e3r6p3% make rule_a
echo "rule A"
rule A

//vim Makefile:
rule_a:
	echo "rule A"
rule_b: rule_a
	 echo "rule B"
//___________________
e3r6p3% make rule_b
echo "rule A"
rule A
echo "rule B"
rule B

//vim Makefile:
VARIABLE_NAME = "42 is for the braves"

rule_a:
	echo $(VARIABLE_NAME)
//___________________
e3r6p3% make rule_a
echo "42 is for the braves"
42 is for the braves

If you use "make" without a variable, it will execute the first rule it encounters in your Makefile



