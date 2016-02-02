note
	description: "[Clase probadora de todo el sistema de archivos, usando una jerarquía de cuatro niveles."
	author: "Rebeca Bárcena Orero"
	date: "enero 2016"
	revision: "1.0"
	testing: "type/manual"

class
	TEST_JERARQUIA

inherit
	EQA_TEST_SET

feature -- Test routines

	TEST_JERARQUIA_NUM_ELEM
		local
			d: DIRECTORIO
			d2: DIRECTORIO
			d3: DIRECTORIO
			d4: DIRECTORIO
			d5: DIRECTORIO
			f1: ARCHIVO
			f2: ARCHIVO
			f3: ARCHIVO
			e1: ENLACE_DIRECTO
			e2: ENLACE_DIRECTO
			ac: ARCHIVO_COMPRIMIDO
		do
			create d.directorio("Imagenes")

            create d2.directorio("2015")
            create d3.directorio("2014")
            create d4.directorio("2013")

            create d5.directorio("Navidades")

            create f1.archivo("abc.jpg", 10)
            create f2.archivo("bcd.jpg", 30)
            create f3.archivo("cde.jpg", 50)

            create e1.enlace_directo(d2)
            create e2.enlace_directo(f3)

            create ac.archivo_comprimido("verano")
            ac.anhade_archivo(f1)
            ac.anhade_archivo(f2)

            d2.anhadeElemento(e1)
            d2.anhadeElemento(e2)

            d5.anhadeElemento(ac)
            d5.anhadeElemento(f3)

            d3.anhadeElemento(d5)

            d.anhadeElemento(d2)
            d.anhadeElemento(d3)
            d.anhadeElemento(d4)

            assert("numElemJerarquia", 11=d.numElem)
		end

	TEST_JERARQUIA_TAMANHO
		local
			d: DIRECTORIO
			d2: DIRECTORIO
			d3: DIRECTORIO
			d4: DIRECTORIO
			d5: DIRECTORIO
			f1: ARCHIVO
			f2: ARCHIVO
			f3: ARCHIVO
			e1: ENLACE_DIRECTO
			e2: ENLACE_DIRECTO
			ac: ARCHIVO_COMPRIMIDO
		do
            create d.directorio("Imagenes")

            create d2.directorio("2015")
            create d3.directorio("2014")
            create d4.directorio("2013")

            create d5.directorio("Navidades")

            create f1.archivo("abc.jpg", 10)
            create f2.archivo("bcd.jpg", 30)
            create f3.archivo("cde.jpg", 50)

            create e1.enlace_directo(d2)
            create e2.enlace_directo(f3)

            create ac.archivo_comprimido("verano")
            ac.anhade_archivo(f1)
            ac.anhade_archivo(f2)

            d2.anhadeElemento(e1)
            d2.anhadeElemento(e2)

            d5.anhadeElemento(ac)
            d5.anhadeElemento(f3)

            d3.anhadeElemento(d5)

            d.anhadeElemento(d2)
            d.anhadeElemento(d3)
            d.anhadeElemento(d4)

            assert("tamanhoJerarquia", 69=d.getTam)
		end
end


