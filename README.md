# ExperimentoConCharAsterisk
<p>Un par de cosas básicas relacionadas con los arrays de chars o punteros a chars...</p>
Una cosa copada que planteó un chabon en una talk de SO aunque no explicó el porqué, fue: "si vos declarás un int y lo guardas en un char* en la posición 0 te va a mostrar nada", porque es interpretado como el centinela \0: es cierto, pero no es que '0' en int es lo mismo que '\0'... es que "el índice" 0 en el ascii es NULL, y null al igual que el centinela '\0' pueden ser usados de manera indistinta en un char* fue ahí que decidí probar un par qué onda con eso.
