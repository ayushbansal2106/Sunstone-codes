import java.util.ArrayList;
import java.util.List;

public class Level {
    private int levelNumber;
    private List<Slot> slots;

    public Level(int levelNumber, int totalSlots) {
        this.levelNumber = levelNumber;
        this.slots = new ArrayList<>();
        for (int i = 1; i <= totalSlots; i++) {
            slots.add(new Slot(levelNumber, i));
        }
    }

    public List<Slot> getSlots() {
        return slots;
    }

    public Slot getAvailableSlot() {
        for (Slot slot : slots) {
            if (!slot.isOccupied()) {
                return slot;
            }
        }
        return null;
    }

    public int getLevelNumber() {
        return levelNumber;
    }
}
