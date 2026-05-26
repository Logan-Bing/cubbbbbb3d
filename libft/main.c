
#include "libft.h"

void  print_list(t_list *head)
{
  while (head)
  {
    printf("%s\n", (char *)head->content);
    head = head->next;
  }
}

void  consume(t_list **head)
{
  if (*head)
    *head = (*head)->next;
}

int main()
{
  t_list *head = NULL;

  t_list *n_1 = ft_lstnew("logan");
  t_list *n_2 = ft_lstnew("gaspard");
  t_list *n_3 = ft_lstnew("toto");
  t_list *n_4 = ft_lstnew("tata");

  ft_lstadd_back(&head, n_1);
  ft_lstadd_back(&head, n_2);
  ft_lstadd_back(&head, n_3);
  ft_lstadd_back(&head, n_4);
  print_list(head);
  t_list *save_head = head;
  consume(&head);
  printf("=== After consume ====\n");
  print_list(save_head);
}
