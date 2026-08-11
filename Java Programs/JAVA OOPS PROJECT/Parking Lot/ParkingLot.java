import java.util.*;

public class ParkingLot {
    private List<Level> levels;
    private Map<String, Ticket> activeTickets;
    private float perMinuteRate;

    public ParkingLot(int totalLevels, int slotsPerLevel, float perMinuteRate) {
        this.perMinuteRate = perMinuteRate;
        this.levels = new ArrayList<>();
        this.activeTickets = new HashMap<>();
        for (int i = 1; i <= totalLevels; i++) {
            levels.add(new Level(i, slotsPerLevel));
        }
    }

    public Ticket parkVehicle(Vehicle vehicle) {
        for (Level level : levels) {
            Slot slot = level.getAvailableSlot();
            if (slot != null) {
                slot.occupy();
                Ticket ticket = new Ticket(vehicle, slot);
                activeTickets.put(ticket.getTicketId(), ticket);
                return ticket;
            }
        }
        return null; // No slots available
    }

    public float leaveParking(String ticketId) {
        if (!activeTickets.containsKey(ticketId)) return -1;

        Ticket ticket = activeTickets.remove(ticketId);
        Slot slot = ticket.getSlot();
        slot.vacate();

        long durationMillis = new Date().getTime() - ticket.getInTime().getTime();
        float minutes = durationMillis / (1000.0f * 60);
        return (float) Math.ceil(minutes) * perMinuteRate;
    }

    public void showAvailableSlots() {
        for (Level level : levels) {
            System.out.print("Level " + level.getLevelNumber() + ": ");
            for (Slot slot : level.getSlots()) {
                if (!slot.isOccupied()) {
                    System.out.print("[" + slot.getSlotNumber() + "] ");
                }
            }
            System.out.println();
        }
    }

    public boolean isValidTicket(String ticketId) {
        return activeTickets.containsKey(ticketId);
    }
}
