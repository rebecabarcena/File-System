note
	description: "Clase probadora de la clase DIRECTORIO"
	author: "Rebeca Bárcena Orero"
	date: "enero 2016"
	revision: "1.0"
	testing: "type/manual"

class
	TEST_DIRECTORIO

inherit
	EQA_TEST_SET

feature -- Test routines

	TEST_ANHADE_ELEMENTO
		local
			a: ARCHIVO
			b: ARCHIVO
			c: ARCHIVO
			f: ARCHIVO
			ac: ARCHIVO_COMPRIMIDO
			d: DIRECTORIO
			d2: DIRECTORIO
			e: ENLACE_DIRECTO
		do
			create a.archivo("thunderstruck", 50)
            create b.archivo("backinblack", 60)
            create c.archivo("lovesong", 40)
            create f.archivo("highwaytohell", 50)
            create ac.archivo_comprimido("musicaComprimida")
            create d.directorio("ACDC")
            create d2.directorio("disco1")
            d2.anhadeElemento(f)
            create e.enlace_directo(a)

            assert("anhadeElem",d.getTam=1)

            d.anhadeElemento(b)
            assert("anhadeElem",61=d.getTam)

            d.anhadeElemento(c)
            assert("anhadeElem",101 = d.gettam)

            d.anhadeElemento(b)
            assert("anhadeElem",101 = d.getTam)

            ac.anhade_archivo(b)
            d.anhadeElemento(ac)
            assert("anhadeElem",119=d.getTam)

            d.anhadeElemento(e)
            assert("anhadeElem",120= d.getTam)

            d.anhadeElemento(d2)
            assert("anhadeElem",171=d.getTam)
		end

	TEST_ELIMINA_ELEMENTO
		local
			a: ARCHIVO
			b: ARCHIVO
			c: ARCHIVO
			f: ARCHIVO
			ac: ARCHIVO_COMPRIMIDO
			d: DIRECTORIO
			d2: DIRECTORIO
			e: ENLACE_DIRECTO
		do
			create a.archivo("thunderstruck", 50)
            create b.archivo("backinblack", 60)
            create c.archivo("lovesong", 40)
            create f.archivo("highwaytohell", 50)
            create ac.archivo_comprimido("musicaComprimida")
            create d.directorio("ACDC")
            create d2.directorio("disco1")
            d2.anhadeElemento(f)
            create e.enlace_directo(a)

            assert("1=d.getTam", true)

            d.anhadeElemento(b)
            d.anhadeElemento(c)
            ac.anhade_archivo(b)
            d.anhadeElemento(ac)
            d.anhadeElemento(e)
            d.anhadeElemento(d2)

            d.eliminaElemento(d2)
            assert("120,=d.getTam", true)

            d.eliminaElemento(e)
            assert("119=d.getTam", true)

            d.eliminaElemento(ac)
            assert("101=d.getTam", true)

            d.eliminaElemento(c)
            assert("61=d.getTam", true)

            d.eliminaElemento(ac)
            assert("61=d.getTam", true)
		end

	TEST_NUM_ELEM
		local
			a: ARCHIVO
			b: ARCHIVO
			c: ARCHIVO
			f: ARCHIVO
			ac: ARCHIVO_COMPRIMIDO
			d: DIRECTORIO
			d2: DIRECTORIO
			e: ENLACE_DIRECTO
		do
			create a.archivo("thunderstruck", 50)
            create b.archivo("backinblack", 60)
            create c.archivo("lovesong", 40)
            create f.archivo("highwaytohell", 50)
            create ac.archivo_comprimido("musicaComprimida")
            create d.directorio("ACDC")
            create d2.directorio("disco1")
            d2.anhadeElemento(f)
            create e.enlace_directo(a)

            assert("1=d.numElem", true)

            d.anhadeElemento(b)
            assert("2=d.numElem", true)

            d.anhadeElemento(c)
            assert("3=d.numElem", true)

            d.eliminaElemento(c)
            assert("2=d.numElem", true)

            ac.anhade_archivo(b)
            d.anhadeElemento(ac)
            assert("4=d.numElem", true)

            d.anhadeElemento(e)
            assert("5=d.numElem", true)

            d.anhadeElemento(d2)
            assert("7=d.numElem", true)

            d.eliminaElemento(d2)
            assert("5=d.numElem", true)

            d.eliminaElemento(c)
            assert("5=d.numElem", true)
		end
end


