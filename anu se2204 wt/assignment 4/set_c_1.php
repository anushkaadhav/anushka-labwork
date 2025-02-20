<?php
  interface Q
  {
    public function enqueue($data);
    public function dequeue();
    public function isempty();
  }

  class Queue implements Q
  {
      private $queue = [];

      public function enqueue($data)
      {
          $this->queue[] = $data;
      }

      public function dequeue()
      {
          if(empty($this->queue))
              return "Queue is empty";
          else
              return array_shift($this->queue);
      }

      public function isempty()
      {
          return empty($this->queue);
      }
  }

  $q1 = new Queue();
  $q1->enqueue(11);
  
  $q2 = new Queue();
  $q2->enqueue(12);
  
  $q3 = new Queue();
  $q3->enqueue(13);
  
  $q3->dequeue();
  
  
  echo "Is Queue 1 empty? " . ($q1->isempty() ? 'Yes' : 'No');
  
?>

