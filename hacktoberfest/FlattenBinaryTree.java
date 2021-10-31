
rinshu2510's avatar
rinshu2510
5
8 hours ago

118 VIEWS

public Node flatten(Node head) {
        Node temp = head ;
        Node prev = null ;
        Node next = null ;
        Node child = null ;
        Stack<Node> s = new Stack<Node>();
        while( temp != null || !s.isEmpty()){
            if(temp == null){
                next = s.pop();
                next.prev = prev ;
                prev.next = next ;
                temp = next ;
                
            }
            if(temp.child != null){
                child = temp.child ;
                temp.child = null ;
                prev = temp;
                if(temp.next !=null){
                    temp.next.prev = null; 
                    s.push(temp.next);
                }
                temp.next = child ;
                child.prev = temp ;
                temp = child ;
            }
            else if(temp.child == null){
                prev = temp ;
                temp = temp.next ;
            }
        }
        return head ;
    }
