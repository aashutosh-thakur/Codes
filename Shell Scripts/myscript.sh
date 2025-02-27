!/bin/bash
 SERVICE="apache2"
 if systemctl is-active-quiet $SERVICE; then
	 echo "$SERVICE is running."
 else
	 echo "$SERVICE is not running. Restarting…”
	 systemctl restart $SERVICE
	 if systemctl is-active-quiet $SERVICE; then
		 echo "$SERVICE has been restarted succesfully."
	 else
		 echo "Failed to restart the service."
	 fi
 fi
