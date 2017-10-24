#define Amoladora 1
#define Mezcladora 2
#define Taladro 3
#define Alquilado 4
#define Finalizado 5
typedef struct
{
    int id;
    int dni;
    char nombre[20];
    char apellido[20];
    char nombreApellido[40];
    int estado;
    int contador;
}eCliente;

typedef struct
{
    int idAlquiler;
    int idCliente;
    int equipo;
    int estadoAlquiler;
    char operador[30];
    float tiempoEstimado;
    float tiempoReal;
    int estado;
}eAlquiler;
typedef struct
{
    int equipo;
    int cont;
    float acum;
    float promedioReal;

}eEquipos;
typedef struct
{
    int idClientes;
    int idAlquiler;
}eNumero;
/**
 * Da de alta a un cliente
 * @param estructura eCliente.
 * @param tamaño de la estructura entero.
 * @return cliente dado de alta.
 */
void altaCliente(eCliente[],int);
/**
 * Inicializa los estados de la estructura eCliente a 0.
 * @param estructura eCliente.
 * @param tamaño de la estructura entero.
 * @return estado del cliente en 0.
 */
void inicializarEstadoCliente(eCliente[],int);
/**
 * Inicializa los estados de la estructura eAlquiler a 0.
 * @param estructura eAlquiler
 * @param tamaño de la estructura entero.
 * @return estado del alquiler en 0.
 */
void inicializarEstadoAlquiler(eAlquiler[],int);
/**
 * Realiza un nuevo alquiler
 * @param estructura eCliente.
 * @param estructura eAlquiler.
 * @param tamaño de la estructura eCliente entero.
 * @param tamaño de la estructura eAlquiler entero.
 * @return nuevo alquiler dado de alta.
 */
void nuevoAlquiler(eCliente[],eAlquiler[],int,int);
/**
 * Muestra alquileres por cliente
 * @param estructura eCliente.
 * @param estructura eAlquiler.
 * @param tamaño de la estructura eCliente entero.
 * @param tamaño de la estructura eAlquiler entero.
 * @return lista de clientes con los equipo alquilados.
 */
void mostrarAlquilerPorCliente(eCliente[],eAlquiler[],int,int);
/**
 *
 * @param estructura eCliente.
 * @param estructura eAlquiler.
 * @param tamaño de la estructura eCliente entero.
 * @param tamaño de la estructura eAlquiler entero.
 * @return
 */
void informar(eCliente[],eAlquiler[],int,int,eEquipos[]);
/**
 * Inicializa clientes
 * @param estructura eCliente.
 * @return da de alta cinco clientes
 */
void inicializarCliente(eCliente[]);
/**
 * Inicializa alquileres
 * @param estructura eAlquiler
 * @return da de alta ocho alquileres
 */
void inicializarAlquiler(eAlquiler[],eCliente[]);
/**
 * Muestra un cliente
 * @param estructura eCliente.
 * @param tamaño de la estructura tipo entero.
 * @return el cliente junto a sus datos
 */
void mostrarCliente(eCliente[],int);
/**
 * Modifica nombre y apellido de un cliente
 * @param estructura eCliente.
 * @param tamaño de la estructura tipo entero.
 * @return el cliente junto a sus datos modificados
 */
void modificarCliente(eCliente[],int);
/**
 * Elimina un cliente
 * @param estructura eCliente.
 * @param tamaño de la estructura tipo entero.
 * @return el cliente dado de baja.
 */
void eliminarCliente(eCliente[],int);
/**
 * Muestra un alquiler.
 * @param estructura eAlquiler.
 * @param Entero con la posición en donde se encuentra el alquiler.
 * @return equipo alquilado.
 */
void mostrarAlquiler(eAlquiler[],int);
/**
 * Finaliza un alquiler.
 * @param estructura eAlquiler.
 *@param estructura eCliente.
 * @param Tamaño de eAlquiler tipo int.
 * @return llamada finalizada.
 */
void finAlquiler(eAlquiler[],eCliente[],int);
/**
 * Lista de clientes con mas alquileres
 * @param estructura eAlquiler.
 * @param estructura eCliente.
 * @param Tamaño de eAlquiler tipo int.
 * @return lista de clientes.
 */
void clienteConMasAlquileres(eCliente[],eAlquiler[],int);
/**
 * Valida que el dni ingresado no se repita.
 * @param estructura eCliente.
 * @param Posicion en i int.
 * @return dni validado/reingresado en caso de haber sido utilizado.
 */
int validarDNI(int,eCliente[],int);
/**
 * Informa: Cliente con mas alquiler, equipo mas alquilado, promedio de alquiler, clientes con sus alquileres
 * @param estructura eCliente.
 * @param estructura eAlquiler
 * @param Tamaño entero de eAlquiler
 * @param Tamaño entero de eCliente
 * @param estructura eEquipos
 * @return Datos listados.
 */
void informar(eCliente[],eAlquiler[],int,int,eEquipos[]);
void promedioReal(eAlquiler[],eEquipos[],int);
void equipoMasAlquilado(eAlquiler[],eEquipos[],int);
void finAlquiler(eAlquiler[],eCliente[],int);
void validarEquipo(eAlquiler alquiler[],int i);
