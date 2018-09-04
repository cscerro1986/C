
float suma(float op1, float op2)
    {
        float reSuma;
        reSuma=op1+op2;
        return reSuma;
    }
float resta(float op1, float op2)
{
    float resResta;
    resResta=op1-op2;
    return resResta;
}
float division (float op1, float op2)
{
    float resDiv;
    if(op1<=0)
    {
        char Error;
        printf("\n Dede ingresar un dividendo mayor que 0 para efectuar una division.");
        return Error;
    }
    resDiv=op1/op2;
    return resDiv;
}
float multiplicacion(float op1, float op2)
{
    float resMulti;
    resMulti=op1*op2;
    return resMulti;
}
float factorial(float op1)
{
   float resFact1;
    if(op1==0)
    {
        return 1;
    }
    else
    {

        resFact1=op1*factorial(op1-1);
        return resFact1;
    }
}
    float factorial_2(float op2)
{
    float resFact2;
    if(op2==0)
    {
        return 1;
    }
    else
    {
        resFact2=op2*factorial(op2-1);
        return resFact2;
    }
}
