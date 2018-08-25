
all:
	$(MAKE) -C ./lib
	$(MAKE) -C ./plug
	$(MAKE) -C ./test

clean:
	$(MAKE) clean -C ./lib
	$(MAKE) clean -C ./plug
	$(MAKE) clean -C ./test
