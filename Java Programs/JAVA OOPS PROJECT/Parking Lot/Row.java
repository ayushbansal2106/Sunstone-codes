import java.util.List;

public class Row {
    List<Spot> spots;

    public Row(List<Spot> spots) {
        this.spots = spots;
    }

    public List<Spot> getSpots() {
        return spots;
    }
}
