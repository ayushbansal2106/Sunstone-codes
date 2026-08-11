import java.util.Date;
import java.util.UUID;

public class Ticket {
    private String ticketId;
    private Vehicle vehicle;
    private Slot slot;
    private Date inTime;

    public Ticket(Vehicle vehicle, Slot slot) {
        this.ticketId = UUID.randomUUID().toString(); // Unique ticket
        this.vehicle = vehicle;
        this.slot = slot;
        this.inTime = new Date(); // Record current time
    }

    public String getTicketId() {
        return ticketId;
    }

    public Vehicle getVehicle() {
        return vehicle;
    }

    public Slot getSlot() {
        return slot;
    }

    public Date getInTime() {
        return inTime;
    }
}
