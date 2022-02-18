#include<stdio.h>
#include<math.h>

int gcd(int a, int b){
    return b == 0 ? a : gcd(b, a % b);   
   
}

int main()
{
    printf("-----RSA ALGORITHM-----\n");
    double p,q,n,c,d,phi,e,msg,m,k;
    p=3;
    q=7;
    n=p*q;
    phi = (p-1)*(q-1);
    e = 2;

    while(e<phi){
        if(gcd(e, phi)==1)
            break;
        e++;
    }

    k=2;
    
    d = (1+(k*phi))/e;

    msg = 27;

    // c holds the encrypted message
    // c = (msg^e) mod n
    c = pow(msg, e);
    c = fmod(c, n);

    // m is to find the decrypted message
    // m = c^d mod n
    m = pow(c,d);
    m = fmod(m,n);

    // printing all the values
    printf("Message to be encrypted : %lf\n", msg);
    printf("p = %lf, q = %lf\n", p,q);
    printf("n=%lf\nphi=%lf\n", n, phi);
    printf("e=%lf, d=%lf\n",e, d);
    printf("Encrypted message : %lf\n", c);
    printf("Decrypted message : %lf\n", m);
    printf("\n----------\n");
    return 0;
}