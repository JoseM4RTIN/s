int incrementar(int variable){
    int valor_retornar;
    valor_retornar = variable + 1;
    return valor_retornar;
}

void incrementarReferencia(int * referencia){

    //printf("En el contexto por referencia tenemos la siguiente direccion de memoria: %p\n",referencia);
   *referencia = *referencia + 1; 
}