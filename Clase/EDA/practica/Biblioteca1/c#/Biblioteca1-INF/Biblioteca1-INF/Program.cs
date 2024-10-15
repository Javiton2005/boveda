using System;
using System.Runtime.InteropServices;
using System.Timers;

namespace biblioteca1
{
    struct Libros
    {
        public string Titulo;
        public string Autor_Apellido;
        public string Autor_Nombre;
        public string Genero;
        public string Editorial;
        public string Coleccion;

        public Libros(string titulo, string autorApellido, string autorNombre, string genero, string editorial, string coleccion)
        {
            Titulo = titulo.Trim();
            Autor_Apellido = autorApellido.Trim();
            Autor_Nombre = autorNombre.Trim();
            Genero = genero.Trim();
            Editorial = editorial.Trim();
            Coleccion = coleccion.Trim();
        }

        public void imprimir()
        {
            Console.WriteLine($"Titulo: {Titulo}");
            Console.WriteLine($"Apellido: {Autor_Apellido}");
            Console.WriteLine($"Nombre: {Autor_Nombre}");
            Console.WriteLine($"Genero: {Genero}");
            Console.WriteLine($"Editorial: {Editorial}");
            Console.WriteLine($"Coleccion: {Coleccion}");
        }

    };
    class Program
    {
        public static void Main()
        {
            Console.WriteLine("Empezamos!");

            Console.WriteLine("Inserte la direccion de donde esta ubicado el archivo");
            String path = Console.ReadLine();

            DateTime start = DateTime.Now;

            StreamReader sr = new StreamReader(path);
            string line = sr.ReadLine(); // nos saltamos la primera linea por que es la forma de configuracion
            int i = 1;
            int a = 1;
            while ((line = sr.ReadLine()) != null)
            {
                //Console.Write (i);
                string[] list = line.Split(";");
                try
                {//|| list[3] == "" || list[4] == "" || list[5] == ""
                    if (list[0] == "" || list[1] == "")
                    {
                    }
                    else
                    {
                        Libros libro = new Libros(list[0], list[1], list[2], list[3], list[4], list[5]);
                        libro.imprimir();
                        a++;
                    }
                }
                catch
                {
                }

                i++;
            }
            sr.Close();
            Console.WriteLine($"Elementos totales: {i}");
            Console.WriteLine($"Elementos escojidos: {a}");
            Console.WriteLine($"Numero de elementos descartados: {i - a}");


            DateTime stop = DateTime.Now;

            TimeSpan Time_spam = stop - start;

            Console.WriteLine($"Segundos invertidos: {Time_spam.TotalSeconds}");
        }
    }
}