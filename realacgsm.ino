const float rf=5.0;
const int bp=0;
int k=0;
int i=0;
int j=-1;
int s;
int a;
int p=0;
void setup()
{pinMode(bp,INPUT);
a=0;
pinMode(13, OUTPUT);
    Serial.begin(9600);
    }
void loop()
{i=i+1;
 
int val=analogRead(bp);
    float volts=(val/1023.0)*rf;
   // Serial.print(volts);
    if (volts<0.8)
      k=k+1;
  if (k>10)
  j=-1;

     
      Serial.print(a);
      Serial.print("a]");
  if (a%2==0)
     digitalWrite(13, LOW);
     else
       digitalWrite(13, HIGH);  
    if (volts>0.8)
       {s=s+1;
       k=0;}
    Serial.print("\n");
    delay(100);
        if (s>7 && k==0)
    {s=0;
    j=j+1;
    
  if(j==0 )
  {a=a+1;
  
  }
   
      Serial.print(j);
      Serial.print("ringing");
    }
    else if(s>1 && k>0)
    {s=0;
          
      }}
