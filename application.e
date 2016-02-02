note
	description : "TorreDeBabel application root class"
	date        : "$Date$"
	revision    : "$Revision$"

class
	APPLICATION

inherit
	ARGUMENTS

create
	make

feature {NONE} -- Initialization

	make
			-- Run application.
		local
			a: ARCHIVO
		do
			--| Add your code here
			create a.archivo ("foto.jpg", 10)
			print ("Hello Eiffel World!%N")
		end

end
