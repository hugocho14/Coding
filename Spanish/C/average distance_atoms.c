#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    char atomoPt, atomoAu;
    int i,j,k, cPt = 0, cAu = 0;
    
    int natomosTotal = 55, natomosPt = 42, natomosAu = 13;
    
    float xPt[natomosPt], yPt[natomosPt], zPt[natomosPt];
    float xAu[natomosAu], yAu[natomosAu], zAu[natomosAu];
    
    float distanciaAu = 0.0, enlaceAu = 0.0, sumaAu = 0.0, promedioAu = 0.0;
    float distanciaPt = 0.0, enlacePt = 0.0, sumaPt = 0.0, promedioPt = 0.0;
    
    FILE *f = fopen("PtAu.xyz","r");
    
    for (i=0;i<natomosPt;i++)
    {
        fscanf(f,"%s %f %f %f \n",atomoPt,&xPt[i],&yPt[i],&zPt[i]);
    }
    
    for (j=0;j<natomosPt;j++)
    {
        for(k=j;k<natomosPt;k++)
        {
            distanciaPt=sqrt(pow(xPt[k]-xPt[j],2)+pow(yPt[k]-yPt[j],2)+pow(zPt[k]-zPt[j],2));
            if(distanciaPt>1.0 && distanciaPt<3.0)
            {
                cPt = cPt+1;
                enlacePt = distanciaPt;
                printf("distanciaPt, %d, enlacePt %f \n",cPt,enlacePt);
                sumaPt = sumaPt + enlacePt;
            }
        }
    }
    
    promedioPt = sumaPt/cPt;
    
    for (i=natomosPt;i<natomosTotal;i++)
    {
        fscanf(f,"%s %f %f %f \n",atomoAu,&xAu[i],&yAu[i],&zAu[i]);
    }
    
    for (j=natomosPt;j<natomosTotal;j++)
    {
        for(k=j;k<natomosTotal;k++)
        {
            distanciaAu=sqrt(pow(xAu[k]-xAu[j],2)+pow(yAu[k]-yAu[j],2)+pow(zAu[k]-zAu[j],2));
            if(distanciaAu>1.0 && distanciaAu<3.0)
            {
                cAu = cAu+1;
                enlaceAu = distanciaAu;
                printf("distanciaPt, %d, enlacePt %f \n",cAu,enlaceAu);
                sumaAu = sumaAu + enlaceAu;
            }
        }
    }
    
    promedioAu = sumaAu/cAu;
    
    printf("La distancia Pt-Pt promedio es: %f Angstroms \n", promedioPt);
    printf("La distancia Au-Au promedio es: %f Angstroms \n", promedioAu);
    
    return 0;
}