.PHONY: clean All

All:
	@echo "----------Building project:[ 4_numeri_stampa_uguaglianza - Debug ]----------"
	@cd "4_numeri_stampa_uguaglianza" && "$(MAKE)" -f  "4_numeri_stampa_uguaglianza.mk"
clean:
	@echo "----------Cleaning project:[ 4_numeri_stampa_uguaglianza - Debug ]----------"
	@cd "4_numeri_stampa_uguaglianza" && "$(MAKE)" -f  "4_numeri_stampa_uguaglianza.mk" clean
