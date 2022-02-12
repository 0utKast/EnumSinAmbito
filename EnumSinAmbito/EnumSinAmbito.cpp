
# if 0
// Define una nueva enumeración sin ámbito llamada Color
enum Color
{
    // Estos son los enumeradores
    // Son constantes simbólicas que definen todos los valores posibles que este tipo puede contener
    // Cada enumerador está separado por una coma, no un punto y coma
    amarillo,
    azul,
    verde, // última coma opcional pero recomendable
}; // la definición enum debe finalizar con un punto y coma

int main()
{
    // Definimos alguna variables del tipo enum Color
    Color coche{ amarillo }; // coche amarillo
    Color camiseta{ verde }; // camiseta verde
    Color bicicleta1{ azul }; // bicicleta azul
    Color bicicleta2{ verde };// bicicleta verde

    Color bicicleta3{ blanco }; // error: blanco no es un enumerador de Color
    Color sombrero{ 2 };       // error: 2 o es un enumerador de Color

    return 0;
}


enum Vehiculo
{
    bicicleta,
    coche,
    moto,
    patinete,
};

enum Color
{
    verde,
    amarillo,
    azul,
};


int main()
{
    Vehiculo miVehiculo{ azul }; // error de compilación: azul no es un enumerador de Vehiculo
    Color camiseta{ moto }; // error de compilación: moto no es un enumerador de Color

    return 0;
}
#endif


enum Empleado
{
    //enumeradores incluidos en el espacio global
    nombre, //error: colisión de nombres en el mismo ámbito
    trabajo,
    salario,
};

enum Alumno
{

    //ambos están en el espacio global
    nombre, //error: colisión de nombres en el mismo ámbito
    curso,
    nota,
};



int main()
{
    Empleado pedro{ nombre }; // error: "nombre" existe en dos enum en el mismo ámbito
    Alumno juan{ curso };

    return 0;
}





#if 0
enum Empleado
{
    //enumeradores incluidos en el espacio global
    nombre, //error: colisión de nombres en el mismo ámbito
    trabajo,
    salario, 
};

enum Alumno
{
    
    //ambos están en el espacio global
    nombre, //error: colisión de nombres en el mismo ámbito
    curso,
    nota, 
};

int main()
{
    Empleado pedro{ Empleado::nombre }; // Correcto: el operador de resolución de alcance 
                                       //  permite elegir enum
    Alumno juan{ curso }; 

    return 0;
}

#endif
