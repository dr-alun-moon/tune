struct note {
	unsigned int pitch; /* 0-88 0:rest 1-88: index into freq table */
	unsigned int duration;
};

extern const double *tones;
