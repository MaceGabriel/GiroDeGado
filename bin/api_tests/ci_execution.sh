LD_LIBRARY_PATH=$LD_LIBRARY_PATH:"../api/"
export LD_LIBRARY_PATH
echo "============= EXECUTING $1 ============="
exec $1