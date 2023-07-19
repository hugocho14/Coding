#include <stdio.h>
#include <math.h>

double G=0.0000000000667;
double K = 9000000000;
double E = 0.000000000008541878176;
int f=3;
float v1=0.0;
float v2=0.0;
float v=0.0;
float x1=0.0;
float x2=0.0;
float x=0.0;
float t1=0.0;
float t2=0.0;
float t=0.0;
float v;
float a;
float vec;
float vecc[3];
float vel(float v, float t, float x);
float acel(float a, float v, float t, float x);
float prod(float vec, float vecc[f]);
void lev();

int main()
{
    int n=0;
    
    printf("Bienvenids al Semi-Fisicario\nEn esta interfaz podra trabajar con algunos problemas de fisica\n");
    
    do
    {
        printf("\n");
        printf("\nPara iniciar o continuar con el programa, seleccione las opciones que tenemos\n");
        printf("\n-Calcular velocidad, distancia y tiempo (MRU)");
        printf("\n-MUA o Caida libre");
        printf("\n-Calculos de producto punto para dos vectores de N dimensiones y producto cruz para dos vectores de 3 dimensiones");
        printf("\n-Levitacion electrostatica");
        printf("\n\nSeleccione su opcion del 1 al 4 y seleccione 5 para salir: ");
        scanf("%d",&n);
        printf("\n");
    
        if(n==1)
        {
            vel(v, t, x);
        }
        if(n==2)
        {
            acel(a, v, t, x);
        }
        if(n==3)
        {
            prod(vec, vecc);
        }
        if(n==4)
        {
            lev();
        }
    }
    while(n!=5);
    
    printf("\nMuchas gracias por utilizar el Semi-fisicario, vuelva pronto :)");

    return 0;
}

float vel(float v, float t, float x)
{
    int y=0;
    
    printf("Trabaja con velocidad\n");
    printf("\nSi conoce vel. y dist., oprima 1\nSi conoce dist. y tiempo oprima 2\nSi conoce el vel. y tiempo oprima 3");
    printf("\nIngrese parametros conocido: ");
    scanf("%d",&y);
    
    if(y==1)
    {
        printf("\nIngrese la velocidad\n");
        scanf("%f",&v1);
        printf("\nIngrese sus dos distancias\n");
        scanf("%f",&x1);
        printf("\n");
        scanf("%f",&x2);
            
        t = (x2-x1)/(v1);
        if(v1!=0&&x2>x1)
        {
            printf("\nSu tiempo sera: %f",t);
            return t;
        }
        else
        {
            printf("\nIntente de nuevo, esta dividiendo entre 0 o esta obteniendo distancias negativas \n\n");
            vel(v, t, x);
            printf("\n");
        }
    }
    if(y==2)
    {
        printf("\nIngrese sus dos distancias\n");
        scanf("%f",&x1);
        printf("\n");
        scanf("%f",&x2);
        printf("\nIngrese sus dos tiempos\n");
        scanf("%f",&t1);
        printf("\n");
        scanf("%f",&t2);
        
        v = (x2-x1)/(t2-t1);
        
        if((t2-t1)!=0&&t2>t1&&x2>x1)
        {
            printf("\nSu velocidad sera: %f",v);
            return v;
        }
        else
        {
            printf("\nIntente de nuevo, esta dividiendo entre 0 o esta obteniendo distancias o tiempos negativos\n\n");
            vel(v, t, x);
            printf("\n");
        }
        
    }
    if(y==3)
    {
        printf("\nIngrese la velocidad\n");
        scanf("%f",&v1);
        printf("\nIngrese sus dos tiempos\n");
        scanf("%f",&t1);
        printf("\n");
        scanf("%f",&t2);
            
        x = (v1)*(t2-t1);
        
        if(t2>t1)
        {
            printf("\nSu distancia sera: %f",x);
            return x;
        }
        else
        {
            printf("\nIntente de nuevo, esta obteniendo tiempos negativos\n\n");
            vel(v, t, x);
            printf("\n");
        }
    }
}

float acel(float a, float v, float t, float x)
{
    int y=0;
    
    printf("Trabaja con aceleracion\n");
    printf("\nSi trabajas con caso general (sin dist), oprima 1\nSi trabajas con caida libre oprima 2");
    printf("\nIngrese el caso: ");
    scanf("%d",&y);
    
    if(y==1)
    {
        int b=0;
        
        printf("\nSi quiere encontrar una velocidad final oprima 1,\nSi quiere encontrar una aceleracion oprima 2\nSi quiere encontrar un tiempo oprima 3");
        printf("\nIngrese parametros conocido: ");
        scanf("%d",&b);
        
        if(b==1)
        {
            printf("\nIngrese la velocidad inicial\n");
            scanf("%f",&v1);
            printf("\nIngrese su aceleracion\n");
            scanf("%f",&a);
            printf("\nIngrese sus dos tiempos\n");
            scanf("%f",&t1);
            printf("\n");
            scanf("%f",&t2);
            
            v = v1 + a*(t2-t1);
            
            if(t2>t1)
            {
                printf("\nSu velocidad sera: %f",v);
                return v;
            }
            else
            {
                printf("\nIntente de nuevo, esta obteniendo tiempos negativos\n\n");
                acel(a, v, t, x);
                printf("\n");
            }
        }
        if(b==2)
        {
            printf("\nIngrese sus dos velocidades\n");
            scanf("%f",&v1);
            printf("\n");
            scanf("%f",&v2);
            printf("\nIngrese sus dos tiempos\n");
            scanf("%f",&t1);
            printf("\n");
            scanf("%f",&t2);
        
            a = (v2-v1)/(t2-t1);
        
            if((t2-t1)!=0&&t2>t1)
            {
                printf("\nSu aceleracion sera: %f",a);
                return a;
            }
            else
            {
                printf("\nIntente de nuevo, esta dividiendo entre 0 o esta obteniendo tiempos negativos\n\n");
                acel(a, v, t, x);
                printf("\n");
            }
        }
        if(b==3)
        {
            printf("\nIngrese sus dos velocidades\n");
            scanf("%f",&v1);
            printf("\n");
            scanf("%f",&v2);
            printf("\nIngrese su aceleracion\n");
            scanf("%f",&a);
            
            t = (v2-v1)/a;
        
            if(v2>v1)
            {
                printf("\nSu distancia sera: %f",t);
                return t;
            }
            else
            {
                printf("\nIntente de nuevo, esta obteniendo tiempos negativos\n\n");
                acel(a, v, t, x);
                printf("\n");
            }
        }
    }
    if(y==2)
    {
        int c=0;
        printf("\nSi quiere encontrar una distancia final oprima 1,\nSi quiere encontrar tiempo (con distancia final igual a 0) oprima 2");
        printf("\nSi quiere encontrar la velocidad del cuerpo en cierto tiempo (con distancia final igual a 0) oprima 3");
        printf("\nSi quiere conocer la velocidad del cuerpo al momento de impacto (con distancia final igual a 0) oprima 4");
        printf("\nSi quiere encontrar la velocidad promedio de caida (con distancia final igual a 0) oprima 5");
        printf("\nIngrese parametros conocido: ");
        scanf("%d",&c);
        
        if(c==1)
        {
            printf("\nIngrese la distancia inicial\n");
            scanf("%f",&x1);
            printf("\n");
            printf("\nIngrese la velocidad inicial\n");
            scanf("%f",&v1);
            printf("\n");
            printf("\nIngrese sus dos tiempos\n");
            scanf("%f",&t1);
            printf("\n");
            scanf("%f",&t2);
            
            x = x1 + v1*(t2-t1) - ((9.81*pow(2,(t2-t1)))/2);
            
            if(t2>t1)
            {
                printf("\nSu distancia sera: %f",x);
                return x;
            }
            else
            {
                printf("\nIntente de nuevo, esta obteniendo tiempos negativos\n\n");
                acel(a, v, t, x);
                printf("\n");
            }
        }
        if(c==2)
        {
            printf("\nIngrese la distancia inicial\n");
            scanf("%f",&x1);
            
            t = sqrt((2*x1)/9.81);
            
            printf("\nSu tiempo sera: %f",t);
            return t;
        }
        if(c==3)
        {
            printf("\nIngrese sus dos tiempos\n");
            scanf("%f",&t1);
            printf("\n");
            scanf("%f",&t2);
            printf("\n");
            
            v = -9.81*(t2-t1);
            
            if(t2>t1)
            {
                printf("\nSu velocidad sera: %f",v);
                return v;
            }
            else
            {
                printf("\nIntente de nuevo, esta obteniendo tiempos negativos\n\n");
                acel(a, v, t, x);
                printf("\n");
            }
        }
        if(c==4)
        {
            printf("\nIngrese la distancia inicial\n");
            scanf("%f",&x1);
            
            v = -sqrt(2*x1*9.81);
            
            printf("\nLa velocidad al golpear el suelo sera: %f\n",v);
            return v;
        }
        if(c==5)
        {
            printf("\nIngrese la distancia inicial\n");
            scanf("%f",&x1);
            
            t = -sqrt((x1*9.81)/2);
            
            printf("\nLa velocidad promedio de la caida sera: %f",t);
            return t;
        }
    }
}

float prod(float vec, float vecc[f])
{
    int d=0,e=0;
    
    printf("Elija si desea calcular el producto punto (oprima 1) o el producto cruz (oprima 2): ");
    scanf("%d",&d);
    
    if(d==1)
    {
        printf("Ingrese la dimension de sus vectores: ");
        scanf("%d",&e);
        
        float vec1[e], vec2[e];
        
        printf("\n");
        printf("Ingrese los elementos de los vectores");
        
        for(int i=0;i<e;i++)
        {
            printf("\nIngrese el elemento %d del vector 1: ",i+1);
            scanf("%f", &vec1[i]);
        }
        
        printf("\n");
        
        for(int i=0;i<e;i++)
        {
            printf("\nIngrese el elemento %d del vector 2: ",i+1);
            scanf("%f", &vec2[i]);
        }
        
        for(int i=0;i<e;i++)
        {
            vec = vec1[i]*vec2[i] + vec;
        }
        
        printf("\n");
        printf("El producto punto de los vectores es: %f",vec);
        
        return vec;
    }
    if(d==2)
    {
        float vec1[3], vec2[3];
        
        printf("\n");
        printf("Ingrese los elementos de los vectores");
        
        for(int i=0;i<3;i++)
        {
            printf("\nIngrese el elemento %d del vector 1: ",i+1);
            scanf("%f", &vec1[i]);
        }
        
        printf("\n");
        
        for(int i=0;i<3;i++)
        {
            printf("\nIngrese el elemento %d del vector 2: ",i+1);
            scanf("%f", &vec2[i]);
        }
        
        vecc[0] = ((vec1[1]*vec2[2])-(vec2[1]*vec1[2]));
        vecc[1] = ((vec1[0]*vec2[2])-(vec2[0]*vec1[2]));
        vecc[2] = ((vec1[0]*vec2[1])-(vec2[0]*vec1[1]));
        
        printf("\nEl vector resultante es %f i - %f j + %f k: ",vecc[0],vecc[1],vecc[2]);
        
        return vecc[f];
    }
    
}

void lev()
{
    long double m1=0.0, m2=0.0,r1=0.0,r2=0.0,fg=0.0,fe=0.0,l=0.0,q1=0.0,q2=0.0,x3=0.0;
    
    printf("Introduzca las masas de los objetos\n");
    scanf("%Lf",&m1);
    printf("\n");
    scanf("%Lf",&m2);
    printf("\nIntroduzca los radios de los objetos\n");
    scanf("%Lf",&r1);
    printf("\n");
    scanf("%Lf",&r2);
    printf("\nIntroduzca la distancia entre sus superficies\n");
    scanf("%Lf",&x3);
    
    fg = G*((m1*m2)/pow(2,(r1+r2+x3)));
    q1 = 5*4*3.141592*E*r1;
    q2 = 5*4*3.141592*E*r2;
    fe = K*((q1*q2)/pow(2,(r1+r2+x3)));
    l=fe/fg;
    
    if(l>1)
    {
        printf("\nSe da la levitacion electrostatica, ya que %.30Lf es mayor a 1",l);
    }
    else
    {
        printf("\nNo se da la levitacion electrostatica, ya que %.30Lf es menor a 1",l);
    }
    
}
