all:
	#sudo mkdir /usr/local/bin/px
	sudo cp ./X /usr/local/bin/px/X
	sudo chmod 700 /usr/local/bin/px/X
	sudo chown userX:userX /usr/local/bin/px/X
	sudo chmod 777 /var/Y/
	sudo chmod 777 /var/X/

clean:
	sudo rm /var/X/Y.c
	sudo rm /var/Y/Y
	sudo rm /usr/local/bin/px/X
