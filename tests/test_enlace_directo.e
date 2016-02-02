note
	description: "Clase que prueba la clase ENLACE_DIRECTO"
	author: "Rebeca Bárcena Orero"
	date: "enero 2016"
	revision: "1.0"
	testing: "type/manual"

class
	TEST_ENLACE_DIRECTO

inherit
	EQA_TEST_SET

feature -- Test routines

	TEST_NUM_ELEM
		local
			a: ARCHIVO
			b: ARCHIVO
			c: ARCHIVO
			f: ARCHIVO
			ac: ARCHIVO_COMPRIMIDO
			d: DIRECTORIO
			e: ENLACE_DIRECTO
			g: ENLACE_DIRECTO
			h: ENLACE_DIRECTO
			i: ENLACE_DIRECTO
		do
			create a.archivo("thunderstruck", 50)
            create b.archivo("backinblack", 60)
            create c.archivo("lovesong", 40)
            create f.archivo("highwaytohell", 50)
            create ac.archivo_comprimido("musicaComprimida")
            ac.anhade_archivo(f)
            create d.directorio("ACDC")
            d.anhadeElemento(b)
            d.anhadeElemento(c)

            create e.enlace_directo(a)
            assert("1=e.numElem", true)

            create g.enlace_directo(ac)
            assert("1=g.numElem", true)

            create h.enlace_directo(d)
            assert("1=h.numElem", true)
		end

	TEST_ELEMENTO_DESTINO
		local
			a: ARCHIVO
			b: ARCHIVO
			c: ARCHIVO
			f: ARCHIVO
			ac: ARCHIVO_COMPRIMIDO
			d: DIRECTORIO
			e: ENLACE_DIRECTO
			g: ENLACE_DIRECTO
			h: ENLACE_DIRECTO
			i: ENLACE_DIRECTO
		do
			create a.archivo("thunderstruck", 50)
            create b.archivo("backinblack", 60)
            create c.archivo("lovesong", 40)
            create f.archivo("highwaytohell", 50)
            create ac.archivo_comprimido("musicaComprimida")
            ac.anhade_archivo(f)
            create d.directorio("ACDC")
            d.anhadeElemento(b)
            d.anhadeElemento(c)

            create e.enlace_directo(a)
           	assert("a=e.getElemento", true)

            create g.enlace_directo(ac)
            assert("ac=g.getElemento", true)

            create h.enlace_directo(d)
            assert("d=h.getElemento", true)
		end

	TEST_TAMANHO
		local
			a: ARCHIVO
			b: ARCHIVO
			c: ARCHIVO
			f: ARCHIVO
			ac: ARCHIVO_COMPRIMIDO
			d: DIRECTORIO
			e: ENLACE_DIRECTO
			g: ENLACE_DIRECTO
			h: ENLACE_DIRECTO
			i: ENLACE_DIRECTO
		do
			create a.archivo("thunderstruck", 50)
            create b.archivo("backinblack", 60)
            create c.archivo("lovesong", 40)
            create f.archivo("highwaytohell", 50)
            create ac.archivo_comprimido("musicaComprimida")
            ac.anhade_archivo(f)
            create d.directorio("ACDC")
            d.anhadeElemento(b)
            d.anhadeElemento(c)

            create e.enlace_directo(a)
            assert("1=e.getTam", true)

            create g.enlace_directo(ac)
            assert("1=g.getTam", true)

            create h.enlace_directo(d)
            assert("1=h.getTam", true)
		end
end


