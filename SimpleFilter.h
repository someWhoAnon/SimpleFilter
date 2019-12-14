struct  SimpleFilter {
	float varVolt;  // average deviation (make it how you like, something about 0.01-0.3)
	float varProcess; // reaction speed (make it how you like, something about 0.01-0.1)
	float Pc;
	float G;
	float P;
	float Xp;
	float Zp;
	float Xe;

// initialization
void init(float Volt, float Proc)
{
	varVolt = Volt; 
	varProcess = Proc;
	Pc = 0.0;
	G = 0.0;
	P = 1.0;
	Xp = 0.0;
	Zp = 0.0;
	Xe = 0.0;
}
//New data = what you want to filter
float doFilter(float NewData) {  
	Pc = P + varProcess;
	G = Pc / (Pc + varVolt);
	P = (1 - G) * Pc;
	Xp = Xe;
	Zp = Xp;
	Xe = G * (NewData - Zp) + Xp; //Xe - filtered value
	return(Xe);
}
};
