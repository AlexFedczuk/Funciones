
/** \brief  pedir un numero para que responda
 *
 * \param char[] el mensaje hacer mostrar
 * \return int el numero ingresado por el usuario
 *
 */
int pedirEntero(char[]);

/** \brief calcula cuentas: sumar/restar/multiplicar.
 *
 * \param int entero a realiizar cuenta
 * \param int entero por el cual se hace la cuenta
 * \return int resultado del ejercicio
 *
 */
int cuenta(int,int);

/** \brief calcula cuentas: sumar/restar/multiplicar con la respuesta escrita
 *
 *
 * \param int entero a realiizar cuenta
 * \param int entero por el cual se hace la cuenta
 * \return void resultado del ejercicio con su printf correspondiente
 *
 */
void cuentaYResultado(int,int);

/** \brief calcula la division entre dos numeros
 *
 * \param int numero a dividir
 * \param int divisor
 * \return float resultado de la division
 *
 */
float cuentaDivision(int,int);

/** \brief calcula la division entre dos numeros y muestra el resultado
 *
 * \param int numero a dividir
 * \param int divisor
 * \return void resultado de la division con su respectivo printf
 *
 */
void cuentaDivisionYResultado(int,int);

/** \brief validacion de notas que esten entre 0 y 10
 *
 * \param void
 * \return int numero ingresado ya validado
 *
 */
int pedirNota(void);

/** \brief avisa si el ente esta entre las dos variables
 *
 * \param int valor minimo
 * \param int valor del entero
 * \return int retorna 1 se aprobar 0 si no aprobo
 *
 */
int aprovarMateria(int, int);

/** \brief saca los factoriales de un entero
 *
 * \param int entero a factoriar
 * \return int todos los factoriales de ese numero
 *
 */
int factorial(int);

/** \brief
 *
 * \param [] int vector a cargar
 * \param int tamanio del vector
 * \return void
 *
 */
void cargarVector(int [],int);

/** \brief muestra todos los valores dentro de un vector
 *
 * \param int[] vector a mostrar
 * \param int tamanio del vector
 * \return void
 *
 */
void mostrarNumeros(int[],int);

/** \brief busca el entero mas grande
 *
 * \param [] int nombre del vector
 * \param int tamanio del vector
 * \return int valor mas alto
 *
 */
int buscarMaximo(int [],int);

/** \brief busca el valor que se le pida
 *
 * \param [] int nombre del vector
 * \param int tanio del vector
 * \param int valor a buscar
 * \return int indice donde se encontro el valor buscado
 *
 */
int buscarValores(int [],int ,int);

/** \brief ordena un vector de menor a mayor
 *
 * \param int[] nombre del vector
 * \param int tamanio del vector
 * \return void
 *
 */
void ordenarVector(int[], int);

/** \brief menu interacivo
 *
 * \param void
 * \return void
 *
 */
void menuDeOpciones(void)

//-----------------------------------------------------------------------------------------
                    //ESTRUCTURAS//


/** \brief carga campos de una estructura
 *
 * \param eEmpleado[] nombre de la variable de la estructura
 * \param int tamanio de la estructura
 * \return void
 *
 */
void cargarEmpleados(eEmpleado[],int);


/** \brief muestra todos los elementos dentro de la estructura ya cargada de un solo ente
 *
 * \param eEmpleado[] nombre de la variable de la estructura
 * \param int tamanio
 * \return void
 *
 */
void mostrarUnempleado(eEmpleado[],int);

/** \brief  muestra todos los elementos dentro de la estructura
            ya cargada de todos los entes que la componen
 *
 * \param eEmpleado[] nombre de la variable de la estructura
 * \param int tamanio
 * \return void
 *
 */
void mostrarEmpleado(eEmpleado[],int);

//-----------------------------------------------------------------------------------------
                    //ESTRUCTURAS//


void cargarEmpleados(eEmpleado[],int);
void mostrarUnEmpleado(eEmpleado[],int);
void mostrarLista(eEmpleado[],int);
void inicializarEmpleados(eEmpleado[],int);
int buscarLibre(eEmpleado[],int);
void hardcodearDatosEmpleados(eEmpleado[],int);

void modificar(eEmpleado[],int,int);
/*void modificar(eEmpleado[],int,);
int buacarLegajo(eEmpleado[],int);*/

void darDeBaja(eEmpleado[],int,int);

float buscarSueldoMaximo(eEmpleado[],int);
void mostrarEmpleadoSueldoMaximo(eEmpleado[],int);
