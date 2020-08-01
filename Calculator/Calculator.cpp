#include<conio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	unsigned int x;
	cout<<"Enter a Function:"<<endl;
	cout<<"|0=+|"<<endl;
	cout<<"|1=-|"<<endl;
	cout<<"|2=*|"<<endl;
	cout<<"|3=/|"<<endl;
	cout<<"|4=^|"<<endl;
	cout<<"|5=Square Root|"<<endl;
	cout<<"|6=Cubic Root|"<<endl;
	cout<<"|7=ax+b=0|"<<endl;
	cout<<"|8=a1+b1=c1"<<endl<<"   a2+b2+c2|"<<endl;
	cout<<"|9=ax^2+bx+c=0|"<<endl;
	cout<<"|10=Average 'n' Numbers|"<<endl;
	cout<<"|11=Prime or Not|"<<endl;
	cout<<"|12=Statement Length|"<<endl;
	cout<<"|13=Cube Area and volume|"<<endl;
	cout<<"|14=Cuboid Area and volume|"<<endl;
	cout<<"|15=Greatest Common Divisor|"<<endl;
	cout<<"|16=Complete Square Numbers Between Two Numbers|"<<endl<<endl;
	cout<<"Function:";
	cin>>x;
	
	if(x>16 or x<0)
    {
    	cout<<"ERROR!!!"<<endl;
    	cout<<"Press any Button to Exit...";
    	getch();
    	return 1;
    }
    
	if(x==0)
   {
    	int a,b,c;
    	cout<<"Enter First Number:";
    	cin>>a;
    	cout<<"Enter Second Number:";
    	cin>>b;
    	c=(a+b);
    	cout<<"Result="<<c<<endl<<"Press any Button to Exit..."<<endl;
    	getch();
    	return 0;
    }
    
	if(x==1)
    {
   		int a,b,c;
    	cout<<"Enter First Number:";
    	cin>>a;
    	cout<<"Enter Second Number:";
    	cin>>b;
    	c=(a-b);
    	cout<<"Result="<<c<<endl<<"Press any Button to Exit..."<<endl;
    	getch();
    	return 0;
    }
    
	if(x==2)
    {
   		int a,b,c;
  		cout<<"Enter First Number:";
   		cin>>a;
    	cout<<"Enter Second Number:";
    	cin>>b;
    	c=(a*b);
    	cout<<"Result="<<c<<endl<<"Press any Button to Exit..."<<endl;
    	getch();
    	return 0;
    }
    
	if(x==3)
    {
    	int a,b,c;
    	cout<<"Enter First Number:";
    	cin>>a;
    	cout<<"Enter Second Number:";
    	cin>>b;
    	c=a/b;
    	cout<<"Result="<<c<<endl<<"Press any Button to Exit..."<<endl;
    	getch();
    	return 0;
    }
    
	if(x==4)
    {
   		int a,b,c;
    	cout<<"Enter First Number:";
    	cin>>a;
    	cout<<"Enter Second Number:";
    	cin>>b;
    	c=(pow(a,b));
    	cout<<"Result="<<c<<endl;
    	cout<<"Press any Button to Exit...";
    	getch();
    	return 0;
    }
    
	if(x==5)
    {
    	int a,b,c;
    	cout<<"Enter Your Number:";
    	cin>>a;
   		c=sqrt (a);
    	cout<<"Result="<<c<<endl;
    	cout<<"Press any Button to Exit...";
    	getch();
    	return 0;
    }
    
	if(x==6)
    {
		int a,c;
		cout<<"Enter Your Number:";
		cin>>a;
		c=cbrt(a);
		cout<<"Result="<<c<<endl;
		cout<<"Press any Button to Exit...";
		getch();
		return 0;
    }
    
	if(x==7)
    {
   		double a,b,x;
   		cout<<"Enter a Number:";
   		cin>>a;
   		cout<<"Enter b Number:";
   		cin>>b;
   		x=-b/a;
   		
   		if(a==0)
    	{
    	    cout<<"Zero Is Not a Valid Number!!!"<<endl;
			cout<<"Press Any Button to Continue...";
 			getch();
       		return 0;
    	}
    	
   		cout<<"x="<<x<<endl<<"Press Any Button to Continue...";
       	getch();
       	return 0;
    }
    
	if(x==8)
    {
 		int a1,a2,b1,b2,c1,c2;
 		double x,y;
 		cout<<"Enter a1:";
 		cin>>a1;
 		cout<<endl;
 		cout<<"Enter b1:";
 		cin>>b1;
 		cout<<endl;
 		cout<<"Enter c1:";
 		cin>>c1;
 		cout<<endl;
 		cout<<"Enter a2:";
 		cin>>a2;
 		cout<<endl;
 		cout<<"Enter b2:";
 		cin>>b2;
 		cout<<endl;
		cout<<"Enter c2:";
 		cin>>c2;
 		cout<<endl;
 		
		if(((a1/a2)==(b1/b2)) and ((a1/a2)==(c1/c2)) and ((b1/b2)==(c1/c2)))
    	{
    		cout<<"Result:INF Answers"<<endl;
     		cout<<"Press any Button to Exit...";
     		getch();
     		return 0;
    	}
		if(((a1/a2)==(b1/b2)) and ((a1/a2)!=(c1/c2)) and (((b1/b2)!=(c1/c2))))
 	    {
   		 	cout<<"Result:NO Answers"<<endl;
     		cout<<"Press any Button to Exit...";
     		getch();
     		return 0;
    	}
    	
    	x=((c1*b2)-(b1*c2))/((a1*b2)-(b1*a2));
   		y=((a1*c2)-(c1*a2))/((a1*b2)-(b1*a2));
    	cout<<"X="<<x<<endl;
    	cout<<"Y="<<y<<endl;
    	cout<<"Press any Button to Exit...";
    	getch();
    	return 0;
    }
    
	if(x==9)
    {
    	int a,b,c;
    	double d;
    	cout<<"Enter a:";
    	cin>>a;
    	cout<<"Enter b:";
    	cin>>b;
    	cout<<"Enter c:";
    	cin>>c;
 		if(a==0)
    	{
     		cout<<"a Can't be 0!!!"<<endl<<"Press any Button to Exit...";
     		getche();
     		return 0;
    	}
		d=((pow(b,2)-(4*a*c)));
		
 		if(d>0)
    	{
    		cout<<"Two ans"<<endl<<"x1="<<(-b+sqrt(d))/2*a<<endl<<"x2="<<(-b-sqrt(d))/2*a<<endl<<"Press any Button to Exit...";
    		getche();
    		return 0;
    	}
    	
 		if(d==0)
    	{
     		cout<<"x1=x2="<<-b/2*a<<endl<<"Press any Button to Exit...";
     		getche();
     		return 0;
    	}
    	
 		if(d<0)
 	    {
   			cout<<"No Ans"<<endl<<"Press any Button to Exit...";
    		getche();
    		return 0;
    	}
    }
    
	if(x==10)
    {
   		int S=0,a,i,n;
   		cout<<"Enter n:";
   		cin>>n;
   		
   		for(i=1;i<=n;i++)
    	{
       		cout<<"Enter Number #"<<i<<":";
       		cin>>a;
       		S+=a;
    	}
    	
    	cout<<"AVE is:"<<double(S)/n<<endl;
    	cout<<"Press any Button to Exit...";
    	getch();
    	return 0;
	}
	
	if(x==11)
	{
    	unsigned long long int n,i,p=1;
    	cout<<"Enter n:";
    	cin>>n;
    	
    	if (n % 2 == 0 && n != 2)
    	{
    		cout<<n<<" is Complex"<<endl<<"Press any Button to Exit...";
        	getch();
        	return 0;
		}
		
    	for(i=2;i<=sqrt(n);i++)
    	{
        	if(n%i==0)
            	p=0;
    	}
    	
    	if(p==1)
        	cout<<n<<" is Prime"<<endl;
    	else
        	cout<<n<<" is Complex"<<endl<<"Press any Button to Exit...";
        getch();
        return 0;
	}
	if(x==12)
	{
   		int count=0;
    	void clearscreen();
    	cout<<"Type a Statement and Enter to End:"<<endl;
    	
		while(cin.get()!='\n')
    		count++;
    	
		cout<<"Length of Statement is:"<<count;
    	getch();
    	return 0;
	}
	if(x==13)
	{
		int a,b,c;
		cout<<"Enter an Order:"<<endl<<"|Order 0=Area|"<<endl<<"|Order 1=Volume|"<<endl;
		cin>>c;
		cout<<"Enter Your Cube Side:";
		cin>>a;
		
		if(c==0)
		{
			b=(a*24);
			cout<<"Area="<<b<<endl<<"Press any Button to Exit...";
			getch();
			return 0;
		}
		
		if(c==1)
		{
			b=(pow(a,3));
			cout<<"Volume="<<b<<endl<<"Press any Button to Exit...";
			getch();
			return 0;
		}
	}
	
	if(x==14)
	{
		unsigned int a,b,c,x,d;
		cout<<"Enter a Function:"<<endl;
		cout<<"|0=Area|"<<endl;
		cout<<"|1=Volume|"<<endl;
		cout<<"Function:";
		cin>>x;
		cout<<"Enter Length:";
		cin>>a;
		cout<<endl;
		cout<<"Enter Width:";
		cin>>b;
		cout<<endl;
		cout<<"Enter Height:";
		cin>>c;
		cout<<endl;
		
		if(x==0)
		{
			d=((2*a*b)+(2*a*c)+(2*b*c));
		}
		
		if(x==1)
		{
			d=(a*b*c);
		}
		
		cout<<"Result="<<d<<endl<<"Press any Button to Exit..."<<endl;
		getch();
		return 0;
	}
	
	if(x==15)
	{
   		unsigned int a,b,r;
    	cout<<"Enter First Number:";
    	cin>>a;
    	cout<<"Enter Second Number:";
    	cin>>b;
    	
    	if(b>a)
        	swap(a,b);
        	
    	if(a%b==0)
    	{
    		cout<<"Greatest Common Divisor is="<<b<<"\nPress any Button to Exit...";
    		getch();
    		return 0;
   		}
   		
    	while(r!=0)
    	{
       		r=a%b;
        	a=b;
        	
        	if(r!=0)
        		b=r;
    	}
    	cout<<"Greatest Common Divisor is="<<b<<"\nPress any Button to Exit...";
    	getch();
    	return 0;
	}
	
	if(x==16)
	{
   		unsigned long long int a,b,p;
		cout<<"Enter First Number:";
		cin>>a;
		cout<<"Enter Second Number:";
		cin>>b;
		
		if(a==b)
		{
			cout<<"Wrong Numbers!!!";
			getch();
			return 0;
		}
    	long long int j=a,i=2;
    	
		while(j<=b)
		{
        	while(i<=sqrt(j))
			{
	    		if(j%i==0)
        			p=0;
        			
        		if(p==0)
        			cout<<j<<"--------->"<<i<<"^2"<<endl;
        		i++;
			}
			j++;
    	}
		cout<<"Press any Button to Exit...";
		getch();
		return 0;
	}
}
