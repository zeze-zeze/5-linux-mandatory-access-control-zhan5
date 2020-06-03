all:
	sudo cp ./X /usr/local/bin/px/X
	sudo chmod 777 /usr/local/bin/px/X

clean:
	sudo rm /var/X/Y.c
	sudo rm /var/Y/Y
	sudo rm /usr/local/bin/px/X
