PAYLOADS = 421C 421D 430C 430D 431C 440C 441C 441D \
		   446C 446D 450C 450D 453C 453D 455C 455D \
		   460C 465C 465D 466C 466D 470C 470D \
		   475C 476C 478C 480C 481C 482C 483C 484C 485C \
		   475D 476D 478D 480D 481D 482D 483D 484D 485D \
		   475E 476E 478E 480E 481E 482E 483E 484E 485E

PAYLOADS = 460C 465C 465D 466C 466D 470C 470D \
		   475C 476C 478C 480C 481C 482C 483C 484C 485C \
		   475D 476D 478D 480D 481D 482D 483D 484D 485D \
		   475E 476E 478E 480E 481E 482E 483E 484E 485E

#PAYLOADS = 475C 476C 478C 480C 481C 482C 483C 484C 485C \
#		   475D 476D 478D 480D 481D 482D 483D 484D 485D \
#		   475E 476E 478E 480E 481E 482E 483E 484E 485E

#PAYLOADS = 484C 484D 485C 485D
PAYLOADS = 485C 485D 485E

export MAMBA_VER

clean:
	@make -f Makefile_release clean

all: $(PAYLOADS)

$(PAYLOADS):
	$(eval MAMBA_VER = $@)
	@echo building mamba_$(MAMBA_VER).bin
	@make -f Makefile_release clean --no-print-directory
	@make -f Makefile_release all --no-print-directory
#	@make -f Makefile_debug clean --no-print-directory
#	@make -f Makefile_debug all --no-print-directory

release: release_$(PAYLOADS)

release_%:
	$(eval MAMBA_VER = $(subst release_,,$@))
	@echo building mamba_$(MAMBA_VER).bin
	@make -f Makefile_release clean --no-print-directory
	@make -f Makefile_release all --no-print-directory

debug: debug_$(PAYLOADS)

debug_%:
	$(eval MAMBA_VER = $(subst debug_,,$@))
	@echo building debug/mamba_$(MAMBA_VER).bin
	@make -f Makefile_debug clean --no-print-directory
	@make -f Makefile_debug all --no-print-directory

loader:
	make -f Makefile_loader clean --no-print-directory
	make -f Makefile_loader --no-print-directory
