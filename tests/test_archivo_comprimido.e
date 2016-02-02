note
	description: "Clase probadora de la clase ARCHIVO_COMPRIMIDO"
	author: "Rebeca Bárcena Orero"
	date: "enero 2016"
	revision: "1.0"
	testing: "type/manual"

class
	TEST_ARCHIVO_COMPRIMIDO

inherit
	EQA_TEST_SET

feature -- Test routines

	TEST_NUM_ELE
		local
			a: ARCHIVO
			b: ARCHIVO
			c: ARCHIVO
			f: ARCHIVO
			ac: ARCHIVO_COMPRIMIDO
			d: DIRECTORIO
			d2: ARCHIVO_COMPRIMIDO
			e: ENLACE_DIRECTO
		do
			create a.archivo("thunderstruck", 50)
            create b.archivo("backinblack", 60)
            create c.archivo("lovesong", 40)
            create f.archivo("highwaytohell", 50)
            create ac.archivo_comprimido("musicaComprimida")
            create d.directorio("ACDC")
            create d2.archivo_comprimido("disco1")
            d2.anhade_Archivo(f)
           create e.enlace_directo(a)

            assert("numElemArchivoCom", 1=ac.numElem)

            ac.anhade_archivo(b);
            assert("numElemArchivoCom", 2=ac.numElem)

            ac.anhade_archivo(c)
            assert("numElemArchivoCom", 3=ac.numElem)

            ac.elimina_archivo(c)
            assert("numElemArchivoCom", 2=ac.numElem)

            ac.anhade_archivo(b)
            assert("numElemArchivoCom", 2=ac.numElem)

            ac.elimina_archivo(b)
            assert("numElemArchivoCom", 1=ac.numElem)

            ac.anhade_archivo(d2)
            assert("numElemArchivoCom", 3=ac.numElem)

            ac.anhade_archivo(e)
            assert("numElemArchivoCom", 4=ac.numElem)

            d.anhadeElemento(d2)
            assert("numElemArchivoCom", 4=ac.numElem)
		end

	TEST_ANHADE_ARCHIVO
		local
			a: ARCHIVO
			b: ARCHIVO
			c: ARCHIVO
			f: ARCHIVO
			ac: ARCHIVO_COMPRIMIDO
			d: DIRECTORIO
			d2: ARCHIVO_COMPRIMIDO
			e: ENLACE_DIRECTO
		do
			create a.archivo("thunderstruck", 50)
            create b.archivo("backinblack", 60)
            create c.archivo("lovesong", 40)
            create f.archivo("highwaytohell", 50)
            create ac.archivo_comprimido("musicaComprimida")
            create d.directorio("ACDC")
            create d2.archivo_comprimido("disco1")
            d2.anhade_archivo(f)
            create e.enlace_directo(a)

            assert("anhadeArchivo", 0=ac.getTam)

            ac.anhade_archivo(b)
            assert("anhadeArchivo", 18=ac.getTam)

            ac.anhade_archivo(c)
            assert("anhadeArchivo", 30=ac.getTam)

            ac.anhade_archivo(b)
            assert("anhadeArchivo", 30=ac.getTam)

            ac.anhade_archivo(d2)
            assert("anhadeArchivo", 34=ac.getTam)

            ac.anhade_archivo(e)
            assert("anhadeArchivo", 34=ac.getTam)

            ac.anhade_archivo(d2)
            assert("anhadeArchivo", 34=ac.getTam)
		end

	TEST_ELIMINA_ARCHIVO
		local
			a: ARCHIVO
			b: ARCHIVO
			c: ARCHIVO
			f: ARCHIVO
			ac: ARCHIVO_COMPRIMIDO
			d: DIRECTORIO
			d2: ARCHIVO_COMPRIMIDO
			e: ENLACE_DIRECTO
		do
			create a.archivo("thunderstruck", 50)
            create b.archivo("backinblack", 60)
            create c.archivo("lovesong", 40)
            create f.archivo("highwaytohell", 50)
            create ac.archivo_comprimido("musicaComprimida")
            create d.directorio("ACDC")
            create d2.archivo_comprimido("disco1")
            d2.anhade_archivo(f)
            create e.enlace_directo(a)

            assert("eliminaArchivo", 0=ac.getTam)

            ac.anhade_archivo(b)
            ac.anhade_archivo(c)
            ac.anhade_archivo(b)
            ac.anhade_archivo(d2)
            ac.anhade_archivo(e)
            ac.anhade_archivo(d2)

            assert("eliminaArchivo", 34=ac.getTam)

            ac.elimina_archivo(e)
            assert("eliminaArchivo", 33=ac.getTam)

            ac.elimina_archivo(d2)
            assert("eliminaArchivo", 28=ac.getTam)

            ac.elimina_archivo(c)
            assert("eliminaArchivo", 15=ac.getTam)

            ac.elimina_archivo(c)
            assert("eliminaArchivo", 15=ac.getTam)

            ac.elimina_archivo(b)
            assert("eliminaArchivo", 0=ac.getTam)
		end
end


