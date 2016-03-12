5

a) Errado = scanf("d", valor);
   Certo = scanf("%d", &valor);

b) Errado = printf("o produto de %d e %d eh %d\n", x, y);
   Certo = printf("o produto de %d e %d eh %d\n", x, y, x*y);

c) Errado = primeiroNumero + segundoNumero = somaTotal
   Certo = somaTotal = primeiroNumero + segundoNumero;

d) Errado = scanf("%d", umInteiro); 
   Certo = scanf("%d", &umInteiro);

e) Errado = printf("O resto de %d dividido por %d eh %d\n, x, y, x%y);
   Certo = printf("O resto de %d dividido por %d eh\n", x, y, x%y);

f) Errado = printf("A soma eh %d", x+y);
   Certo = print(“A soma eh %d”, x+y);

g) Errado = printf("o valor fornecido eh %d", valor);
   Certo = printf(“o valor fornecido eh %d”, &valor);
